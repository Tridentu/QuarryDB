set( libquarrydb_SRCS
    dbmanager.cpp
)

set( libquarrydb_HDRS
    dbmanager.h
    ${CMAKE_CURRENT_BINARY_DIR}/quarrydb_export.h

)
 
 add_library( quarrydbcore SHARED ${libquarrydb_SRCS})
 
 generate_export_header(quarrydbcore BASE_NAME quarrydb)

 
 
target_link_libraries(quarrydbcore 
    PUBLIC
        Qt5::Core
        KF5::I18n
        KF5::XmlGui
        Qt5::Sql
    PRIVATE
        Qt5::Gui
)

set_target_properties(quarrydbcore PROPERTIES VERSION 0.1 SOVERSION 0.1.0)

install(TARGETS quarrydbcore
  ${INSTALL_TARGETS_DEFAULT_ARGS})
  
install(FILES ${libquarrydb_HDRS}
  DESTINATION ${INCLUDE_INSTALL_DIR}/quarrydb  COMPONENT Devel)

