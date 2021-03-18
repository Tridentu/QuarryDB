# CMake generated Testfile for 
# Source directory: /media/Seagate/tridentu_cpp_apps/QuarryDB
# Build directory: /media/Seagate/tridentu_cpp_apps/QuarryDB/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(appstreamtest "/usr/bin/cmake" "-DAPPSTREAMCLI=/usr/bin/appstreamcli" "-DINSTALL_FILES=/media/Seagate/tridentu_cpp_apps/QuarryDB/build/install_manifest.txt" "-P" "/usr/share/ECM/kde-modules/appstreamtest.cmake")
set_tests_properties(appstreamtest PROPERTIES  _BACKTRACE_TRIPLES "/usr/share/ECM/kde-modules/KDECMakeSettings.cmake;184;add_test;/usr/share/ECM/kde-modules/KDECMakeSettings.cmake;202;appstreamtest;/usr/share/ECM/kde-modules/KDECMakeSettings.cmake;0;;/media/Seagate/tridentu_cpp_apps/QuarryDB/CMakeLists.txt;12;include;/media/Seagate/tridentu_cpp_apps/QuarryDB/CMakeLists.txt;0;")
subdirs("libsrc")
subdirs("src")
subdirs("icons")
