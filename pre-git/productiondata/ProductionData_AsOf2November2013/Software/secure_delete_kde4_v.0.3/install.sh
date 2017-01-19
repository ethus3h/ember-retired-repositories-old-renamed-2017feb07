#!/bin/bash

CURRENTD=$(dirname "$0")  	# looking at the current location of this file
CURRENTDIR=$CURRENTD"/"		# add a slash at the end of the located path for upcoming operations

if [ "$CURRENTD" == "." ];then	# looking if it was navigated into the dir of this file
CURRENTDIR=""			# current directory changes fron "." to ""
fi

# local kde4-folder
LOCALPREFIX=`kde4-config --localprefix`

# looking if local bin-folder exists
  if [ -d "$HOME"/bin ]; then
  echo "directory" "$HOME"/bin "exists"
  else
  mkdir "$HOME"/bin	# create local bin-folder
  echo "created directory" "$HOME"/bin
  fi

# looking if local servicemenu-folder exists
  if [ -d "$LOCALPREFIX"/share/kde4/services/ServiceMenus ]; then
  echo "directory" "$LOCALPREFIX"/share/kde4/services/ServiceMenus "exists"
  else
  mkdir "$LOCALPREFIX"/share/kde4/services/ServiceMenus	# create local servicemenu-folder
  echo "created directory" "$LOCALPREFIX"/share/kde4/services/ServiceMenus
  fi

cd "$CURRENTDIR"src		# change to src-dir inside the installation folder

# copies *.desktop-files to local ServiceMenu dir
cp secure_delete_kde4.desktop "$LOCALPREFIX"/share/kde4/services/ServiceMenus
cp secure_delete_folder_kde4.desktop "$LOCALPREFIX"/share/kde4/services/ServiceMenus

# copies all scripts to local bin dir
cp securedeletefolder.sh "$HOME"/bin
cp securedelete.sh "$HOME"/bin

echo "Installation done!"	# message for successful installation
kdialog --msgbox "installation done! To uninstall simple delete securedeletefolder.sh and securedelete.sh from your ~/bin directory, secure_delete_kde4.desktop and secure_delete_folder_kde4.desktop from your ~/.kde/share/kde4/services/ServiceMenus directory"
