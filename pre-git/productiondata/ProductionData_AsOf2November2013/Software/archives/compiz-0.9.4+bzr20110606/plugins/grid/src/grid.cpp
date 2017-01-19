/*
 * Compiz Fusion Grid plugin
 *
 * Copyright (c) 2008 Stephen Kennedy <suasol@gmail.com>
 * Copyright (c) 2010 Scott Moreau <oreaus@gmail.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * Description:
 *
 * Plugin to act like winsplit revolution (http://www.winsplit-revolution.com/)
 * use <Control><Alt>NUMPAD_KEY to move and tile your windows.
 *
 * Press the tiling keys several times to cycle through some tiling options.
 */

#include "grid.h"

bool compositingActive;

static const GridProps gridProps[] =
{
    {0,1, 1,1},

    {0,1, 2,2},
    {0,1, 1,2},
    {1,1, 2,2},

    {0,0, 2,1},
    {0,0, 1,1},
    {1,0, 2,1},

    {0,0, 2,2},
    {0,0, 1,2},
    {1,0, 2,2},

    {0,0, 1,1},
};

GridRectangle
GridRectangle::subtractBorders (CompWindow      *w) const
{
    return CompRect (x () + w->border ().left,
		     y () + w->border ().top,
		     width () - (w->border ().left + w->border ().right),
		     height () - (w->border ().top + w->border ().bottom));
}

GridRectangle
GridRectangle::addBorders (CompWindow      *w) const
{
    return CompRect (x () - w->border ().left,
		     y () - w->border ().top,
		     width () + (w->border ().left + w->border ().right),
		     height () + (w->border ().top + w->border ().bottom));
}

GridRectangle
GridWindow::constrainSize (const GridRectangle& slot)
{
    GridRectangle result = slot.subtractBorders (window);
    CompRect wa = screen->outputDevs ().at (screen->outputDeviceForGeometry (window->serverGeometry ())).workArea ();
    int      cw, ch;

    if (window->constrainNewWindowSize (result.width (), result.height (), &cw, &ch))
    {
	/* constrained size may put window offscreen, adjust for that case */
	int dx = result.x () + cw - wa.right () + window->border ().right;
	int dy = result.y () + ch - wa.bottom () + window->border ().bottom;

	if (dx > 0)
	    result.setX (result.x () - dx);
	if (dy > 0)
	    result.setY (result.y () - dy);

	/* constrainment may leave gaps between the edges of the screen
	 * and the window borders ... in that case center the window so
	 * that these gaps are even */

	if (result.width () != cw)
	    result.setX (result.x () + ((result.width () - cw) / 2));

	if (result.height () != ch)
	    result.setY (result.y () + ((result.height () - ch) / 2));

	result.setWidth (cw);
	result.setHeight (ch);
    }

    return result.addBorders (window);
}

bool
GridWindow::allowGrid (GridType where)
{
    /* Don't grid windows that can't be resized */
    if (!(window->actions () & CompWindowActionResizeMask))
	return false;

    if (where == GridMaximize)
    {
	if (!(window->actions () & (CompWindowActionMaximizeHorzMask | CompWindowActionMaximizeVertMask)))
	    return false;

	/* Don't maximize windows twice */
	if (window->state () & (MAXIMIZE_STATE))
	    return false;
    }

    return true;

}

bool
GridScreen::initiateCommon (CompAction         *action,
			    CompAction::State  state,
			    CompOption::Vector &option,
			    GridType           where,
			    bool               resize)
{
    Window     xid;
    CompWindow *cw = 0;

    xid = CompOption::getIntOptionNamed (option, "window");
    cw  = screen->findWindow (xid);

    if (where == GridUnknown)
    {
	if (desiredSlot)
	{
	    delete desiredSlot;
	    desiredSlot = NULL;
	}

	return false;
    }
    else if (screen->otherGrabExist ("move", NULL))
	return false;

    if (cw)
    {
	XWindowChanges xwc;

	GRID_WINDOW (cw);

	if (!gw->allowGrid (where))
	    return false;

	if (gw->lastTarget != where)
	    gw->resizeCount = 0;

	props = gridProps[where];

	/* get current available area */
	if (cw == mGrabWindow)
	    workarea = screen->getWorkareaForOutput
			    (screen->outputDeviceForPoint (pointerX, pointerY));
	else
	{
	    workarea = screen->getWorkareaForOutput (cw->outputDevice ());

	    if (!gw->isGridResized)
            {
                CompWindow *window  = cw;
		/* Store size not including borders when using a keybinding */
		gw->originalSize = (CompRect &) cw->serverGeometry ();
            }
	}

	if ((cw->state () & MAXIMIZE_STATE) &&
	    (resize || optionGetSnapoffMaximized ()))
	{
	    /* maximized state interferes with us, clear it */
	    cw->maximize (0);
	}

	if (where == GridMaximize && resize)
	{
	    /* move the window to the correct output */
	    if (cw == mGrabWindow)
	    {
		xwc.x = workarea.x () + 50;
		xwc.y = workarea.y () + 50;
		xwc.width = workarea.width ();
		xwc.height = workarea.height ();
		cw->configureXWindow (CWX | CWY, &xwc);
	    }

	    cw->maximize (MAXIMIZE_STATE);
	    gw->isGridResized = true;
	    gw->isGridMaximized = true;

	    return true;
	}

	/* Should really be three different types here, but not enough time
	 * to implement that one FIXME */
	if (!desiredSlot)
	{
	    if (resize)
	    {
		desiredSlot = new PaintableAnimatedGridRectangle ();

		if (!desiredSlot)
		    return false;
	    }
	    else
	    {
		CompRect sbr = cw->serverBorderRect ();
		if (compositingActive)
		{
		    CompRect sbr = cw->serverBorderRect ();
		    desiredSlot = new PaintableAnimatedGridRectangle ();

		    if (!desiredSlot)
			return false;
		}
		else
		{
		    desiredSlot = new PaintableAnimatedGridRectangle ();

		    if (!desiredSlot)
			return false;
		}

		((AnimatedGridRectangle *) desiredSlot)->setFrom (sbr);
	    }
	}

	/* Convention:
	 * xxxSlot include decorations (it's the screen area occupied)
	 * xxxRect are undecorated (it's the constrained position
	                            of the contents)
	 */

	/* slice and dice to get desired slot - including decorations */
	desiredSlot->setY (workarea.y () + props.gravityDown *
			  (workarea.height () / props.numCellsY));
	desiredSlot->setHeight (workarea.height () / props.numCellsY);
	desiredSlot->setX (workarea.x () + props.gravityRight *
			  (workarea.width () / props.numCellsX));
	desiredSlot->setWidth (workarea.width () / props.numCellsX);

	/* Adjust for constraints and decorations */
	desiredRect = gw->constrainSize (*desiredSlot).subtractBorders (cw);
	/* Get current rect not including decorations */
	currentRect.setGeometry (cw->serverX (), cw->serverY (),
				 cw->serverWidth (),
				 cw->serverHeight ());

	if (desiredRect.y () == currentRect.y () &&
	    desiredRect.height () == currentRect.height () &&
	    where != GridMaximize && gw->lastTarget == where)
	{
	    int slotWidth25  = workarea.width () / 4;
	    int slotWidth33  = (workarea.width () / 3) + cw->border ().left;
	    int slotWidth17  = slotWidth33 - slotWidth25;
	    int slotWidth66  = workarea.width () - slotWidth33;
	    int slotWidth75  = workarea.width () - slotWidth25;

	    if (props.numCellsX == 2) /* keys (1, 4, 7, 3, 6, 9) */
	    {
		if ((currentRect.width () == desiredRect.width () &&
		    currentRect.x () == desiredRect.x ()) ||
		    (gw->resizeCount < 1) || (gw->resizeCount > 5))
		    gw->resizeCount = 3;

		/* tricky, have to allow for window constraints when
		 * computing what the 33% and 66% offsets would be
		 */
		switch (gw->resizeCount)
		{
		    case 1:
			desiredSlot->setWidth (slotWidth66);
			desiredSlot->setX (workarea.x () +
					  props.gravityRight * slotWidth33);
			gw->resizeCount++;
			break;
		    case 2:
			gw->resizeCount++;
			break;
		    case 3:
			desiredSlot->setWidth (slotWidth33);
			desiredSlot->setX (workarea.x () +
					  props.gravityRight * slotWidth66);
			gw->resizeCount++;
			break;
		    case 4:
			desiredSlot->setWidth (slotWidth25);
			desiredSlot->setX (workarea.x () +
					  props.gravityRight * slotWidth75);
			gw->resizeCount++;
			break;
		    case 5:
			desiredSlot->setWidth (slotWidth75);
			desiredSlot->setX (workarea.x () +
					  props.gravityRight * slotWidth25);
			gw->resizeCount++;
			break;
		    default:
			break;
		}
	    }
	    else /* keys (2, 5, 8) */
	    {

		if ((currentRect.width () == desiredRect.width () &&
		    currentRect.x () == desiredRect.x ()) ||
		    (gw->resizeCount < 1) || (gw->resizeCount > 5))
		    gw->resizeCount = 1;
	    
		switch (gw->resizeCount)
		{
		    case 1:
			desiredSlot->setWidth (workarea.width () -
					     (slotWidth17 * 2));
			desiredSlot->setX (workarea.x () + slotWidth17);
			gw->resizeCount++;
			break;
		    case 2:
			desiredSlot->setWidth ((slotWidth25 * 2) +
					      (slotWidth17 * 2));
			desiredSlot->setX (workarea.x () +
					 (slotWidth25 - slotWidth17));
			gw->resizeCount++;
			break;
		    case 3:
			desiredSlot->setWidth ((slotWidth25 * 2));
			desiredSlot->setX (workarea.x () + slotWidth25);
			gw->resizeCount++;
			break;
		    case 4:
			desiredSlot->setWidth (slotWidth33 -
			    (cw->border ().left + cw->border ().right));
			desiredSlot->setX (workarea.x () + slotWidth33);
			gw->resizeCount++;
			break;
		    case 5:
			gw->resizeCount++;
			break;
		    default:
			break;
		}
	    }

	    if (gw->resizeCount == 6)
		gw->resizeCount = 1;

	    desiredRect = gw->constrainSize (*desiredSlot).subtractBorders (cw);
	}

	/* TODO: animate move+resize */
	if (resize)
	{
	    xwc.x = desiredRect.x ();
	    xwc.y = desiredRect.y ();
	    xwc.width  = desiredRect.width ();
	    xwc.height = desiredRect.height ();

	    /* Store a copy of xwc since configureXWindow changes it's values */
	    XWindowChanges wc = xwc;
	    unsigned int   flags = (CWX | CWY | CWWidth | CWHeight);

	    if (cw->mapNum ())
		cw->sendSyncRequest ();

	    delete desiredSlot;
	    desiredSlot = NULL;

	    cw->configureXWindow (flags, &xwc);
	    gw->isGridResized = true;
	    gw->isGridMaximized = false;
	}

	gw->lastTarget = where;
    }

    return true;
}

CompRect
AnimatedGridRectangle::current ()
{
    /* Expand edges out to destination rect based on progress */

    CompRect ret = mFrom;

    ret.setTop (floor (mFrom.top () + (top () - mFrom.top ()) * mProgress));
    ret.setLeft (floor (mFrom.left () + (left () - mFrom.left ()) * mProgress));
    ret.setRight (floor (mFrom.right () + (right () - mFrom.right ()) * mProgress));
    ret.setBottom (floor (mFrom.bottom () + (bottom () - mFrom.bottom ()) * mProgress));

    return ret;
}

float
AnimatedGridRectangle::progress ()
{
    return mProgress;
}

void
AnimatedGridRectangle::setTime (unsigned int t)
{
    mTime = t;
}

void
AnimatedGridRectangle::setFrom (CompRect &f)
{
    mFrom = f;
}

void
AnimatedGridRectangle::setProgress (float p)
{
    mProgress = p;

    if (mProgress >= 1.0f)
	mProgress = 1.0f;
    else if (mProgress <= 0.0f)
	mProgress = 0.0f;
}

void
AnimatedGridRectangle::reset ()
{
    mProgress = 0.0f;
}

void
PaintableAnimatedGridRectangle::paint (const GLMatrix &mat)
{
    CompRect outline;
    CompRect fill = current ();
    GridScreen *gScreen = GridScreen::get (screen);

    if (gScreen->optionGetIndicatorType () == GridOptions::IndicatorTypeOutline)
    {
	GLint origSrc, origDst;
	CompOutput *o = &screen->outputDevs ().at (screen->outputDeviceForPoint (CompPoint (pointerX, pointerY)));
	float alpha = (float) gScreen->optionGetFillColorAlpha () / 65535.0f * progress ();
	
	glGetIntegerv (GL_BLEND_SRC, &origSrc);
	glGetIntegerv (GL_BLEND_DST, &origDst);

	glPushMatrix ();

	glLoadMatrixf (mat.getMatrix ());

	glDisableClientState (GL_TEXTURE_COORD_ARRAY);
	glEnable (GL_BLEND);
	glBlendFunc (GL_ONE, GL_ONE_MINUS_SRC_ALPHA);

	/* fill rectangle */
	glColor4f (((float) gScreen->optionGetFillColorRed () / 65535.0f) * alpha,
		   ((float) gScreen->optionGetFillColorGreen () / 65535.0f) * alpha,
		   ((float) gScreen->optionGetFillColorBlue () / 65535.0f) * alpha,
		   alpha);
	glRecti (fill.x1 (), fill.y2 (), fill.x2 (), fill.y1 ());

	/* Set outline rect smaller to avoid damage issues */
	outline.setGeometry (fill.x () + 1, fill.y () + 1,
			  fill.width () - 2,fill. height () - 2);

	/* draw outline */
	glColor4f (((float) gScreen->optionGetOutlineColorRed () / 65535.0f) * alpha,
		   ((float) gScreen->optionGetOutlineColorGreen () / 65535.0f) * alpha,
		   ((float) gScreen->optionGetOutlineColorBlue () / 65535.0f) * alpha,
		   ((float) gScreen->optionGetOutlineColorAlpha () / 65535.0f) * progress ());
	glLineWidth (2.0);
	glBegin (GL_LINE_LOOP);
	glVertex2i (outline.x1 (), outline.y1 ());
	glVertex2i (outline.x2 (), outline.y1 ());
	glVertex2i (outline.x2 (), outline.y2 ());
	glVertex2i (outline.x1 (), outline.y2 ());
	glEnd ();

	/* clean up */
	glColor4usv (defaultColor);
	glBlendFunc (origSrc, origDst);
	glDisable (GL_BLEND);
	glEnableClientState (GL_TEXTURE_COORD_ARRAY);
	glPopMatrix ();
    }
}

bool
GridScreen::glPaintOutput (const GLScreenPaintAttrib &attrib,
			   const GLMatrix            &matrix,
			   const CompRegion          &region,
			   CompOutput                *output,
			   unsigned int              mask)
{
    bool     status;
    
    mAllowPaint = ((unsigned int) output->id () ==
		    (unsigned int) screen->outputDeviceForPoint (pointerX, pointerY));

    if (desiredSlot && optionGetDrawIndicator () &&
	!optionGetBehindWindow () && mAllowPaint)
    {
	GLMatrix sTransform (matrix);
	status = glScreen->glPaintOutput (attrib, matrix, region, output, mask);

	sTransform.toScreenSpace (output, -DEFAULT_Z_CAMERA);
	((PaintableAnimatedGridRectangle *) desiredSlot)->paint (sTransform);
    }
    else
	status = glScreen->glPaintOutput (attrib, matrix, region, output, mask);

    return status;
}

GridType
GridScreen::edgeToGridType ()
{
    GridType ret;

    switch (edge) {
    case Left:
	ret = (GridType) optionGetLeftEdgeAction ();
	break;
    case Right:
	ret = (GridType) optionGetRightEdgeAction ();
	break;
    case Top:
	ret = (GridType) optionGetTopEdgeAction ();
	break;
    case Bottom:
	ret = (GridType) optionGetBottomEdgeAction ();
	break;
    case TopLeft:
	ret = (GridType) optionGetTopLeftCornerAction ();
	break;
    case TopRight:
	ret = (GridType) optionGetTopRightCornerAction ();
	break;
    case BottomLeft:
	ret = (GridType) optionGetBottomLeftCornerAction ();
	break;
    case BottomRight:
	ret = (GridType) optionGetBottomRightCornerAction ();
	break;
    case NoEdge:
    default:
	ret = GridUnknown;
	break;
    }

    return ret;
}

void
GridScreen::handleEvent (XEvent *event)
{
    CompOutput	       out;
    CompOption::Vector opts;
    CompOption::Value  v = CompOption::Value ((int) mGrabWindow->id ());
    CompRect	       *edgeBox = NULL;
    float	       edgeDist; /* interpolated 0.0f -> 1.0f based on distance */

    screen->handleEvent (event);

    if (event->type != MotionNotify || !mGrabWindow || screen->otherGrabExist ("move", NULL))
	return;

    opts.resize (1);
    opts.at (0).setName ("window", CompOption::TypeInt);
    opts.at (0).set (v);

    out = screen->outputDevs ().at (
                   screen->outputDeviceForPoint (CompPoint (pointerX, pointerY)));

    /* Detect corners first */
    /* Bottom Left */
    if (pointerY > (out.y () + out.height () - optionGetBottomEdgeThreshold() - 1) &&
        pointerX < out.x () + optionGetLeftEdgeThreshold())
    {
	float xd, yd;
	unsigned int xptr = pointerX - out.x ();
	unsigned int yptr = (out.y () + out.height ()) - pointerY;

	if (xptr)
	    xd = MIN (((float) xptr / (float) optionGetLeftEdgeThreshold ()), 1.0f);
	else
	    xd = 0.0f;

	if (yptr)
	    yd = MIN (((float) yptr / (float) (optionGetBottomEdgeThreshold () - 1)), 1.0f);
	else
	    yd = 0.0f;

	if (optionGetIndicatorDirection () == GridOptions::IndicatorDirectionFromEdge)
	    edgeBox = new CompRect (out.x (), out.y () + (out.height () - mGrabWindow->height ()),
				    mGrabWindow->width (), mGrabWindow->height ());

	edgeDist = (xd + yd) / 2.0f;
	edge = BottomLeft;
    }
    /* Bottom Right */
    else if (pointerY > (out.y () + out.height () - optionGetBottomEdgeThreshold() - 1) &&
             pointerX > (out.x () + out.width () - optionGetRightEdgeThreshold() - 1))
    {
	float xd, yd;
	unsigned int xptr = (out.x () + out.width ()) - pointerX;
	unsigned int yptr = (out.y () + out.height ()) - pointerY;

	if (xptr)
	    xd = MIN (((float) xptr / (float) (optionGetRightEdgeThreshold () - 1)), 1.0f);
	else
	    xd = 0.0f;

	if (yptr)
	    yd = MIN (((float) yptr / (float) (optionGetBottomEdgeThreshold () - 1)), 1.0f);
	else
	    yd = 0.0f;

	if (optionGetIndicatorDirection () == GridOptions::IndicatorDirectionFromEdge)
	    edgeBox = new CompRect (out.x () + (out.width () - mGrabWindow->width ()),
				    out.y () + (out.height () - mGrabWindow->height ()),
				    mGrabWindow->width (), mGrabWindow->height ());

	edgeDist = (xd + yd) / 2.0f;
	edge = BottomRight;
    }
    /* Top Left */
    else if (pointerY < optionGetTopEdgeThreshold() &&
	    pointerX < optionGetLeftEdgeThreshold())
    {
	float xd, yd;
	unsigned int xptr = pointerX - out.x ();
	unsigned int yptr = pointerY - out.y ();

	if (xptr)
	    xd = MIN (((float) xptr / (float) optionGetLeftEdgeThreshold ()), 1.0f);
	else
	    xd = 0.0f;

	if (yptr)
	    yd = MIN (((float) yptr / (float) optionGetTopEdgeThreshold ()), 1.0f);
	else
	    yd = 0.0f;

	if (optionGetIndicatorDirection () == GridOptions::IndicatorDirectionFromEdge)
	    edgeBox = new CompRect (out.x (),
				    out.y (),
				    mGrabWindow->width (), mGrabWindow->height ());

	edgeDist = (xd + yd) / 2.0f;
	edge = TopLeft;
    }
    /* Top Right */
    else if (pointerY < out.y () + optionGetTopEdgeThreshold() &&
             pointerX > (out.x () + out.width () - optionGetRightEdgeThreshold() - 1))
    {
	float xd, yd;
	unsigned int xptr = (out.x () + out.width ()) - pointerX;
	unsigned int yptr = pointerY - out.y ();

	if (xptr)
	    xd = MIN (((float) xptr / (float) (optionGetRightEdgeThreshold () - 1)), 1.0f);
	else
	    xd = 0.0f;

	if (yptr)
	    yd = MIN (((float) yptr / (float) optionGetTopEdgeThreshold ()), 1.0f);
	else
	    yd = 0.0f;

	if (optionGetIndicatorDirection () == GridOptions::IndicatorDirectionFromEdge)
	    edgeBox = new CompRect (out.x () + (out.width () - mGrabWindow->width ()),
				    out.y (),
				    mGrabWindow->width (), mGrabWindow->height ());

	edgeDist = (xd + yd) / 2.0f;
	edge = TopRight;
    }
    /* Left */
    else if (pointerX < out.x () + optionGetLeftEdgeThreshold())
    {
	float xd;
	unsigned int xptr = pointerX - out.x ();

	if (xptr)
	    xd = MIN (((float) xptr / (float) optionGetLeftEdgeThreshold ()), 1.0f);
	else
	    xd = 0.0f;

	if (optionGetIndicatorDirection () == GridOptions::IndicatorDirectionFromEdge)
	    edgeBox = new CompRect (out.x (),
				    out.y () + (out.height () / 2.0f) - mGrabWindow->height () / 2.0f,
				    mGrabWindow->width (), mGrabWindow->height ());

	edgeDist = xd;
	edge = Left;
    }
    /* Right */
    else if (pointerX > (out.x () + out.width () - optionGetRightEdgeThreshold() - 1))
    {
	float xd;
	unsigned int xptr = (out.x () + out.width ()) - pointerX;

	if (xptr)
	    xd = MIN (((float) xptr / (float) (optionGetRightEdgeThreshold () - 1)), 1.0f);
	else
	    xd = 0.0f;

	if (optionGetIndicatorDirection () == GridOptions::IndicatorDirectionFromEdge)
	    edgeBox = new CompRect (out.x () + (out.width () - mGrabWindow->width ()),
				    out.y () + (out.height () / 2.0f) - mGrabWindow->height () / 2.0f,
				    mGrabWindow->width (), mGrabWindow->height ());

	edgeDist = xd;
	edge = Right;
    }
    /* Top */
    else if (pointerY < out.y () + optionGetTopEdgeThreshold())
    {
	float yd;
	unsigned int yptr = pointerY - out.y ();

	if (yptr)
	    yd = MIN (((float) yptr / (float) optionGetTopEdgeThreshold ()), 1.0f);
	else
	    yd = 0.0f;

	if (optionGetIndicatorDirection () == GridOptions::IndicatorDirectionFromEdge)
	    edgeBox = new CompRect (out.x () + (out.width () / 2.0f) - mGrabWindow->width () / 2.0f,
				    out.y (),
				    mGrabWindow->width (), mGrabWindow->height ());

	edgeDist = yd;
	edge = Top;
    }
    /* Bottom */
    else if (pointerY > (out.y () + out.height () - optionGetBottomEdgeThreshold() - 1))
    {
	float yd;
	unsigned int yptr = (out.y () + out.height ()) - pointerY;

	if (yptr)
	    yd = MIN (((float) yptr / (float) (optionGetBottomEdgeThreshold () - 1)), 1.0f);
	else
	    yd = 0.0f;

	if (optionGetIndicatorDirection () == GridOptions::IndicatorDirectionFromEdge)
	    edgeBox = new CompRect (out.x () + (out.width () / 2.0f) - mGrabWindow->width () / 2.0f,
				    out.y () + (out.height () - mGrabWindow->height ()),
				    mGrabWindow->width (), mGrabWindow->height ());

	edgeDist = yd;
	edge = Bottom;
    }
    /* No Edge */
    else
	edge = NoEdge;

    /* Detect when cursor enters another output */

    currentWorkarea = screen->getWorkareaForOutput
			    (screen->outputDeviceForPoint (pointerX, pointerY));
    if (lastWorkarea != currentWorkarea)
    {
	CompRect old;

	if (desiredSlot)
	    old = *desiredSlot;

	lastWorkarea = currentWorkarea;

	if (compositingActive && cScreen)
	    cScreen->damageRegion (old);

	initiateCommon (0, 0, opts, edgeToGridType (), false);

	if (edgeBox && desiredSlot)
	{
	    desiredSlot->setFrom (*edgeBox);
	    delete edgeBox;
	}

	if (compositingActive && cScreen)
	    cScreen->damageRegion (desiredSlot ? *desiredSlot : old);
    }

    /* Detect edge region change */
    if (lastEdge != edge)
    {
	CompRect old;

	if (desiredSlot)
	{
	    ((AnimatedGridRectangle *) desiredSlot)->reset ();
	    old = *desiredSlot;
	}

	lastEdge = edge;

	if (compositingActive && cScreen)
	    cScreen->damageRegion (old);

	initiateCommon (0, 0, opts, edgeToGridType (), false);

	if (edgeBox && desiredSlot)
	{
	    desiredSlot->setFrom (*edgeBox);
	    delete edgeBox;
	}

	if (compositingActive && cScreen)
	    cScreen->damageRegion (desiredSlot ? *desiredSlot : old);
    }

    /* The closer the user gets to the edge, the more progress should go up */
    if (desiredSlot)
    {
	CompRect damage;
	CompRect sbr = mGrabWindow->serverBorderRect ();

	damage = ((AnimatedGridRectangle *) desiredSlot)->current ();
	cScreen->damageRegion (damage);

	if (optionGetIndicatorDirection () == GridOptions::IndicatorDirectionFromWindow)
	    ((AnimatedGridRectangle *) desiredSlot)->setFrom (sbr);
	((AnimatedGridRectangle *) desiredSlot)->setProgress (1.0f - edgeDist);

	damage = ((AnimatedGridRectangle *) desiredSlot)->current ();
	cScreen->damageRegion (damage);
    }

    GRID_WINDOW (mGrabWindow);

    if ((gw->pointerBufDx > SNAPOFF_THRESHOLD ||
	 gw->pointerBufDy > SNAPOFF_THRESHOLD ||
	 gw->pointerBufDx < -SNAPOFF_THRESHOLD ||
	 gw->pointerBufDy < -SNAPOFF_THRESHOLD) &&
	 gw->isGridResized &&
	 optionGetSnapbackWindows ())
	    restoreWindow (0, 0, opts);
}

bool
GridWindow::glDraw (const GLMatrix            &transform,
		    GLFragment::Attrib	      &fragment,
		    const CompRegion          &region,
		    unsigned int              mask)
{
    CompRegion nRegion = region;

    if (gScreen->desiredSlot && gScreen->mAllowPaint)
    {
	nRegion = nRegion.united (gScreen->desiredSlot->current ());

	gScreen->desiredSlot->paint (transform);
    }

    return glWindow->glDraw (transform, fragment, nRegion, mask);
}

void
GridWindow::grabNotify (int          x,
			int          y,
			unsigned int state,
			unsigned int mask)
{
    if (screen->grabExist ("move"))
    {
	screen->handleEventSetEnabled (gScreen, true);
	if (compositingActive)
	{
	    if (gScreen->optionGetBehindWindow ())
		glWindow->glDrawSetEnabled (this, true);
	    gScreen->glScreen->glPaintOutputSetEnabled (gScreen, true);
	    gScreen->mAllowPaint  = false;
	}
	gScreen->mGrabWindow = window;
	pointerBufDx = pointerBufDy = 0;

	if (!isGridResized && gScreen->optionGetSnapbackWindows ())
        {
	    /* Store size not including borders when grabbing with cursor */
	    originalSize = window->serverGeometry ();
        }
    }

    if (screen->grabExist ("resize"))
    {
	isGridResized = false;
	resizeCount = 0;
    }

    window->grabNotify (x, y, state, mask);
}

void
GridWindow::stateChangeNotify (unsigned int lastState)
{
    CompOption::Vector opts;
    CompOption::Value  v = CompOption::Value ((int ) window->id ());

    opts.resize (1);
    opts.at (0).setName ("window", CompOption::TypeInt);
    opts.at (0).set (v);

    if ((lastState & MAXIMIZE_STATE) && !(window->state () & MAXIMIZE_STATE))
        GridScreen::get (screen)->restoreWindow (NULL, 0, opts);

    window->stateChangeNotify (lastState);
}

void
GridWindow::ungrabNotify ()
{
    if (window == gScreen->mGrabWindow)
    {
	CompOption::Vector opts;
	CompRect	   damage = gScreen->desiredSlot ? *gScreen->desiredSlot : CompRect (0, 0, 0, 0);
	CompOption::Value  v = CompOption::Value ((int) gScreen->mGrabWindow->id ());

	opts.resize (1);
	opts.at (0).setName ("window", CompOption::TypeInt);
	opts.at (0).set (v);

	gScreen->initiateCommon
			(0, 0, opts, gScreen->edgeToGridType (), true);

	screen->handleEventSetEnabled (gScreen, false);

	if (compositingActive)
	{
	    if (gScreen->optionGetBehindWindow ())
		glWindow->glDrawSetEnabled (this, false);
	    gScreen->glScreen->glPaintOutputSetEnabled (gScreen, false);
	    gScreen->mAllowPaint  = false;
	    gScreen->cScreen->damageRegion (damage);
	}

	gScreen->mGrabWindow = NULL;

    }

    gScreen->edge = NoEdge;

    window->ungrabNotify ();
}

void
GridWindow::moveNotify (int dx, int dy, bool immediate)
{
    window->moveNotify (dx, dy, immediate);

    pointerBufDx += dx;
    pointerBufDy += dy;
}

bool
GridWindow::doResize (unsigned int mask, XWindowChanges *xwc)
{
    window->configureXWindow (mask, xwc);
    free (xwc);
    return false;
}

bool
GridScreen::restoreWindow (CompAction         *action,
			   CompAction::State  state,
			   CompOption::Vector &option)
{
    XWindowChanges *xwc = (XWindowChanges *) malloc (sizeof (XWindowChanges));
    CompWindow *cw = screen->findWindow (screen->activeWindow ());

    if (!cw)
	return false;

    GRID_WINDOW (cw);

    if (!gw->isGridResized)
	return false;

    if (cw == mGrabWindow)
    {
        xwc->x = pointerX - (gw->originalSize.width () >> 1);
        xwc->y = pointerY + (cw->border ().top >> 1);
    }
    else
    {
        xwc->x = gw->originalSize.x ();
        xwc->y = gw->originalSize.y ();
    }

    xwc->width  = gw->originalSize.width ();
    xwc->height = gw->originalSize.height ();

    cw->maximize (0);
    gw->resizeTimer.setCallback (boost::bind (&GridWindow::doResize, gw, CWX | CWY | CWWidth | CWHeight, xwc));
    gw->resizeTimer.start ();

    gw->pointerBufDx = 0;
    gw->pointerBufDy = 0;

    gw->isGridResized = false;
    gw->isGridMaximized = false;
    gw->resizeCount = 0;

    return true;
}

GridScreen::GridScreen (CompScreen *screen) :
    PluginClassHandler<GridScreen, CompScreen> (screen),
    desiredSlot (NULL),
    mGrabWindow (NULL),
    mAllowPaint (false)
{
    if (compositingActive)
    {
	cScreen = CompositeScreen::get (screen);
	glScreen = GLScreen::get (screen);

	CompositeScreenInterface::setHandler (cScreen, false);
	GLScreenInterface::setHandler (glScreen, false);
    }

    ScreenInterface::setHandler (screen, false);

    edge = lastEdge = NoEdge;
    currentWorkarea = lastWorkarea = screen->getWorkareaForOutput
			    (screen->outputDeviceForPoint (pointerX, pointerY));

#define GRIDSET(opt,where,resize)					       \
    optionSet##opt##Initiate (boost::bind (&GridScreen::initiateCommon, this,  \
					   _1, _2, _3, where, resize))

    GRIDSET (PutCenterKey, GridCenter, true);
    GRIDSET (PutLeftKey, GridLeft, true);
    GRIDSET (PutRightKey, GridRight, true);
    GRIDSET (PutTopKey, GridTop, true);
    GRIDSET (PutBottomKey, GridBottom, true);
    GRIDSET (PutTopleftKey, GridTopLeft, true);
    GRIDSET (PutToprightKey, GridTopRight, true);
    GRIDSET (PutBottomleftKey, GridBottomLeft, true);
    GRIDSET (PutBottomrightKey, GridBottomRight, true);
    GRIDSET (PutMaximizeKey, GridMaximize, true);

#undef GRIDSET

    optionSetPutRestoreKeyInitiate (boost::bind (&GridScreen::
					    restoreWindow, this, _1, _2, _3));

}

GridWindow::GridWindow (CompWindow *window) :
    PluginClassHandler <GridWindow, CompWindow> (window),
    window (window),
    glWindow (GLWindow::get (window)),
    gScreen (GridScreen::get (screen)),
    isGridResized (false),
    isGridMaximized (false),
    pointerBufDx (0),
    pointerBufDy (0),
    resizeCount (0),
    lastTarget (GridUnknown)
{
    resizeTimer.setTimes (0, 0);

    WindowInterface::setHandler (window);
    GLWindowInterface::setHandler (glWindow, false);
}

/* Initial plugin init function called. Checks to see if we are ABI
 * compatible with core, otherwise unload */

bool
GridPluginVTable::init ()
{
    if (!CompPlugin::checkPluginABI ("core", CORE_ABIVERSION))
        return false;

    if (!CompPlugin::checkPluginABI ("composite", COMPIZ_COMPOSITE_ABI) ||
	!CompPlugin::checkPluginABI ("opengl", COMPIZ_OPENGL_ABI))
	compositingActive = false;
    else
	compositingActive = true;

    return true;
}
