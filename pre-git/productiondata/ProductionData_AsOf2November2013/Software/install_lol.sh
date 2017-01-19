

    #!/bin/bash
    #
    # Author: Danilo Riffo (aka. DanAlucard)
    # License: GPL v3
    #
    # made for own usage and for the WineHQ - League of Legends community
    #
    #
    

    #change this to the specific wine version you want to use.
    Wine_version="1.5.5" 

    scriptWD=$(pwd)  #this variable stores this script location for future use
     
    #################################################################################
    #download and extract the wine source                                           #
    #################################################################################
    echo "downloading wine source..."
    wget http://downloads.sourceforge.net/project/wine/Source/wine-$Wine_version.tar.bz2
     
    echo "extracting wine source..."
    tar -xjf wine-$Wine_version.tar.bz2 && mv wine-$Wine_version $HOME/wine-$Wine_version
     
    #################################################################################
    #variable that we will need to compile and configure wine                       #
    #################################################################################
    WINEPREFIX=$HOME/LoL_wine-$Wine_version
     
    #################################################################################
    #prepare wine to be compiled                                                    #
    #################################################################################
    echo "going into $HOME/wine-$Wine_version"
    cd $HOME/wine-$Wine_version
     
    echo "downloading Wine patches, so it can properly run LoL..."
    wget http://bugs.winehq.org/attachment.cgi?id=40818 -O patch1.patch
    wget http://bugs.winehq.org/attachment.cgi?id=40819 -O patch2.patch
    wget http://bugs.winehq.org/attachment.cgi?id=39446 -O lol-store-1.patch
    wget http://bugs.winehq.org/attachment.cgi?id=39447 -O lol-store-2.patch
    wget http://bugs.winehq.org/attachment.cgi?id=39449 -O lol-store-3.patch
     
     
    echo "download complete. Patching wine..."
    patch -p1 < patch1.patch
    patch -p1 < patch2.patch
    patch -p1 < lol-store-1.patch
    patch -p1 < lol-store-2.patch
    patch -p1 < lol-store-3.patch
     
     
    #################################################################################
    #configure and compile:                                                         #
    #################################################################################
    echo "configuring wine..."
    ./configure --prefix=$WINEPREFIX
     
    echo "Watch out for configure errors, bcs I'm going to compile wine."
    echo "It will take a while, so close all your applications, press enter and go to drink something..."
    read $foo
     
    echo "compiling wine..."
    make -j2       #this makes 'make' to have 2 jobs (use 2 CPU cores). For muti-core CPUs this is just awesome.
     
    echo "installing wine into $WINEPREFIX"
    make install   #this installs wine into WINEPREFIX directory.
     
    #################################################################################
    #prepare the wineprefix environment                                             #
    #################################################################################
    clear
    echo "preparing the Wine Prefix environment..."
    export WINEPREFIX=$HOME/LoL_wine-$Wine_version/LoL_Prefix  #wineprefix's location
    WINEXE=$HOME/LoL_wine-$Wine_version/bin/wine               #wine executable location
    
    clear
    echo "Running winecfg to set-up the wineprefix for the first time. Please, just close it."
    WINEARCH=win32 WINEPREFIX=$WINEPREFIX $HOME/LoL_wine-$Wine_version/bin/winecfg
    
    #download the latest winetricks and use it
    wget "http://winetricks.org/winetricks" -O ./winetricks
    chmod +x ./winetricks
    env WINE=$WINEXE ./winetricks d3dx9 vcrun2005 vcrun2008 wininet corefonts ie6 win7
    rm ./winetricks

    echo "running LoL Installer..."
    

    # if you have the web-based installer (about 2MiB), use this
    GC_DONT_GC=1 $WINEXE $scriptWD/LeagueofLegends.exe
    # if you are not using the web-based installer comment the previous line.
     
    # if you have the full installer (about 2 GiB), uncomment and use this instead of the previous one:
    #$WINEXE $scriptWD/LoL_installer/setup.exe      #This is supposed to point into the full LoL installer.
    

     
    #################################################################################
    #create the loltask script to optimize LoL threading                            #
    #################################################################################
    echo "creating loltask thread optimizer for LoL..."
     
    echo "#!/bin/bash
     
    OLDPID='a'
     
    while true; do
     
           LOLPID=\`ps -A | grep -m 1 'League of Legen' | awk '{print $1}'\`
           WINESVRPID=\`ps -A | grep -m 1 'wineserver' | awk '{print $1}'\`
           WINEDEVPID=\`ps -A | grep -m 1 'winedevice.exe' | awk '{print $1}'\`
     
           if [ ! \$LOLPID ]; then
                   echo 'League of Legends is not running'
           elif [ \$OLDPID != \$LOLPID ]; then
                   OLDPID=\$LOLPID
                   renice -n -10 \$LOLPID
                   renice -n -10 \$WINESVRPID
                   renice -n -10 \$WINEDEVPID
                   ionice -c 1 -n 1 -p \$WINESVRPID
                   ionice -c 1 -n 1 -p \$WINEDEVPID
                   ionice -c 1 -n 1 -p \$LOLPID
           else
                   echo 'League of Legends is already tuned.'
           fi
     
           sleep 15
    done
    " > ./loltask
     
    

    # change kdesu to gksu if u don't use KDE
    gksu mv ./loltask /usr/bin/loltask
    gksu chmod +x /usr/bin/loltask

     
    #################################################################################
    #now, we're ready to create the launcher                                        #
    #################################################################################
    echo "creating the launcher..."
     
    echo "#!/bin/bash
     
    export WINEPREFIX=\$HOME/LoL_wine-$Wine_version/LoL_Prefix  #wineprefix location
    WINEXE=\$HOME/LoL_wine-$Wine_version/bin/wine               #location of wine executable
     
    cd \$WINEPREFIX/drive_c/Riot\ Games/League\ of\ Legends/RADS/system/
    \$WINEXE \"rads_user_kernel.exe\" run lol_launcher \$(ls ../projects/lol_launcher/releases/) LoLLauncher.exe &
     
    loltask_instance=\$(ps -A | grep loltask)
    if [ ! \"\$loltask_instance\" ]; then

           # change kdesu to gksu if u don't use KDE
           gksu loltask & 

    else
           echo \"loltask is already started. You do not want it to be started again.\"
    fi
     
    " > $HOME/Desktop/Play_LeagueOfLegends.sh
     
    chmod +x $HOME/Desktop/Play_LeagueOfLegends.sh
     
    #################################################################################
    #clean the mess I've done                                                       #
    #################################################################################
    echo "removing temporary files..."
    rm -R $HOME/wine-$Wine_version
    rm $scriptWD/wine-$Wine_version.tar.bz2
     
    #################################################################################
    #finalize                                                                       #
    #################################################################################
    echo "LoL build completed!"
    echo ""
    echo ""
    echo "If wine created a shortcut to LoL in your desktop, delete it."
    echo "to play League of Legends use the Play_LeagueOfLegends.sh script in your desktop ;)"
    echo ""
    echo ""
    


