set( quarrydb_SRCS
    main.cpp
    quarrydbwindow.cpp
)

ki18n_wrap_ui(quarrydb_SRCS quarrydb.ui)

add_executable( quarrydb ${quarrydb_SRCS} )

target_link_libraries( quarrydb
    KF5::CoreAddons
    KF5::I18n
    KF5::XmlGui
    Qt5::Widgets
    quarrydbcore
)



install( TARGETS quarrydb ${KDE_INSTALL_TARGETS_DEFAULT_ARGS} )
install( PROGRAMS io.github.tridentu.quarrydb.desktop DESTINATION ${KDE_INSTALL_APPDIR} )
install( FILES io.github.tridentu.quarrydb.appdata.xml DESTINATION ${KDE_INSTALL_METAINFODIR} )
install(FILES quarrydb.rc DESTINATION ${KDE_INSTALL_KXMLGUI5DIR}/quarrydb)
