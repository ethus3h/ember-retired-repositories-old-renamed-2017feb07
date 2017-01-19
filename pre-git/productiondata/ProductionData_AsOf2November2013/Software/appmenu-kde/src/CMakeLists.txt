include_directories(
    ${CMAKE_SOURCE_DIR}
    ${CMAKE_BINARY_DIR}
    )

set(menubar_SRCS
    menubarapplet.cpp
    menucloner.cpp
    menuutils.cpp
    menuwidget.cpp
    windowmenumanager.cpp
    )

kde4_add_plugin(plasma_applet_menubar ${menubar_SRCS})

target_link_libraries(plasma_applet_menubar
    ${KDE4_PLASMA_LIBS}
    ${KDE4_KIO_LIBS}
    ${DBUSMENUQT_LIBRARIES}
    ${QJSON_LIBRARY}
    kappmenu
    )

install(TARGETS plasma_applet_menubar
    DESTINATION ${PLUGIN_INSTALL_DIR})

install(FILES
    plasma-applet-menubar.desktop
    DESTINATION ${SERVICES_INSTALL_DIR})
