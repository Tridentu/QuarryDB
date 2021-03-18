set( quarrydb_SRCS
    main.cpp
    quarrydbwindow.cpp
)

ki18n_wrap_ui(quarrydb_SRCS quarrydb.ui)

add_executable( quarrydb ${quarrydb_SRCS} )

target_link_libraries( quarrydb
    KF5::CoreAddons
    KF5::I18n
    Qt5::Widgets
)

install( TARGETS quarrydb ${KDE_INSTALL_TARGETS_DEFAULT_ARGS} )
install( PROGRAMS org.example.quarrydb.desktop DESTINATION ${KDE_INSTALL_APPDIR} )
install( FILES org.example.quarrydb.appdata.xml DESTINATION ${KDE_INSTALL_METAINFODIR} )
