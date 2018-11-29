cmake_minimum_required (VERSION 2.8.11)
project(ci_test)
include(${CMAKE_ROOT}/Modules/ExternalProject.cmake)
find_package(Git)


#add_subdirectory (library)
#add_subdirectory (test)

#ExternalProject_Add( deplib
#        GIT_REPOSITORY "https://github.com/sgenie68/ci_test_dep.git"
##        CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${EXTERNAL_INSTALL_LOCATION}
#		BUILD_COMMAND make
#		INSTALL_COMMAND "cp library/*.so ../library"
#	    SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/ci_test_dep
#		INSTALL_DIR ${CMAKE_CURRENT_SOURCE_DIR}/library
#		LOG_DOWNLOAD 1
#        BUILD_IN_SOURCE 1 )

#essage( STATUS "DEPLIB=${deplib}" )

#add_subdirectory(ci_test_dep)
#find_library( DEPLIBLIB deplib )

#create library called liblibrary
add_library( library library/library.cpp )
add_executable( tester test/tester.cpp )
target_include_directories( library PUBLIC $(CMAKE_CURRENT_SOURCE_DIR)/library )
target_include_directories( tester PUBLIC $(CMAKE_CURRENT_SOURCE_DIR)/library )

target_link_libraries( tester LINK_PUBLIC library )

