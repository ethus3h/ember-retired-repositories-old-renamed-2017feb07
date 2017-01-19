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

#include <core/core.h>
#include <core/atoms.h>
#include <core/pluginclasshandler.h>
#include <composite/composite.h>
#include <opengl/opengl.h>

#include <cmath>

#include "grid_options.h"

#define SNAPOFF_THRESHOLD 50

extern bool compositingActive;

typedef enum
{
    GridUnknown = 0,
    GridBottomLeft = 1,
    GridBottom = 2,
    GridBottomRight = 3,
    GridLeft = 4,
    GridCenter = 5,
    GridRight = 6,
    GridTopLeft = 7,
    GridTop = 8,
    GridTopRight = 9,
    GridMaximize = 10
} GridType;

typedef struct _GridProps
{
    int gravityRight;
    int gravityDown;
    int numCellsX;
    int numCellsY;
} GridProps;

enum Edges
{
    NoEdge = 0,
    BottomLeft,
    Bottom,
    BottomRight,
    Left,
    Right,
    TopLeft,
    Top,
    TopRight
};

class GridRectangle :
    public CompRect
{
    public:

	GridRectangle () {};
	GridRectangle (const CompRect &r) :
	    CompRect::CompRect (r)
	{
	};

	GridRectangle subtractBorders (CompWindow *w) const;
	GridRectangle addBorders (CompWindow *w) const;
};

class Paintable
{
    public:

	Paintable ()
	{
	};

	virtual void paint (const GLMatrix &mat) = 0;
};

class AnimatedGridRectangle :
    public GridRectangle
{
    public:

	AnimatedGridRectangle () :
	    GridRectangle::GridRectangle (),
	    mFrom (CompRect (0, 0, 0, 0)),
	    mProgress (0.0f),
	    mTime (300)
	{
	};

	AnimatedGridRectangle (const GridRectangle &r) :
	    GridRectangle::GridRectangle (r),
	    mFrom (CompRect (0, 0, 0, 0)),
	    mProgress (0.0f),
	    mTime (300)
	{
	};

	AnimatedGridRectangle (const CompRect &r) :
	    GridRectangle::GridRectangle (r),
	    mFrom (CompRect (0, 0, 0, 0)),
	    mProgress (0.0f),
	    mTime (300)
	{
	};

	CompRect current ();
	float    progress ();

	void setFrom (CompRect &);
	void setProgress (float);
	void reset ();
	void setTime (unsigned int);

    private:

	CompRect mFrom;
	float	 mProgress;

	unsigned int mTime;
};

class PaintableAnimatedGridRectangle :
    public Paintable,
    public AnimatedGridRectangle
{
    public:

	PaintableAnimatedGridRectangle () :
	    Paintable::Paintable (),
	    AnimatedGridRectangle::AnimatedGridRectangle ()
	{
	};

	PaintableAnimatedGridRectangle (const GridRectangle &r) :
	    Paintable::Paintable (),
	    AnimatedGridRectangle::AnimatedGridRectangle (r)
	{
	};

	PaintableAnimatedGridRectangle (const CompRect &r) :
	    Paintable::Paintable (),
	    AnimatedGridRectangle::AnimatedGridRectangle (r)
	{
	};

	virtual void paint (const GLMatrix &mat);
};

class GridScreen :
    public ScreenInterface,
    public CompositeScreenInterface,
    public GLScreenInterface,
    public PluginClassHandler <GridScreen, CompScreen>,
    public GridOptions
{
    public:

	GridScreen (CompScreen *);
	CompositeScreen *cScreen;
	GLScreen        *glScreen;

	PaintableAnimatedGridRectangle *desiredSlot;
	CompRect workarea, currentRect,
		 desiredRect, lastWorkarea, currentWorkarea;
	GridProps props;
	Edges edge, lastEdge;
	CompWindow *mGrabWindow;
	
	bool mAllowPaint;

	void getPaintRectangle (CompRect&);

	bool initiateCommon (CompAction*, CompAction::State,
			     CompOption::Vector&, GridType, bool);

	bool glPaintOutput (const GLScreenPaintAttrib &,
			    const GLMatrix &, const CompRegion &,
			    CompOutput *, unsigned int);

	GridType edgeToGridType ();

	void handleEvent (XEvent *event);

	bool restoreWindow (CompAction*,
			    CompAction::State,
			    CompOption::Vector&);

	void
	snapbackOptionChanged (CompOption *option,
				Options    num);
};

class GridWindow :
    public WindowInterface,
    public GLWindowInterface,
    public PluginClassHandler <GridWindow, CompWindow>
{
    public:

	GridWindow (CompWindow *);
	CompWindow *window;
	GLWindow   *glWindow;
	GridScreen *gScreen;

	bool isGridResized;
	bool isGridMaximized;
	int pointerBufDx;
	int pointerBufDy;
	int resizeCount;
	CompRect originalSize;
        CompTimer resizeTimer;
	GridType lastTarget;

        bool
        doResize (unsigned int, XWindowChanges *xwc);

	bool
	allowGrid (GridType t);

	GridRectangle
	constrainSize (const GridRectangle & slot);

	bool
	glDraw (const GLMatrix            &transform,
		GLFragment::Attrib	  &fragment,
		const CompRegion          &region,
		unsigned int              mask);

	void grabNotify (int, int, unsigned int, unsigned int);

	void ungrabNotify ();

        void stateChangeNotify (unsigned int lastState);

	void moveNotify (int, int, bool);
};

#define GRID_WINDOW(w) \
    GridWindow *gw = GridWindow::get (w)

class GridPluginVTable :
    public CompPlugin::VTableForScreenAndWindow <GridScreen, GridWindow>
{
    public:

	bool init ();
};

COMPIZ_PLUGIN_20090315 (grid, GridPluginVTable);

