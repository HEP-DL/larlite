cmake_minimum_required (VERSION 2.6)
project (larlite)

#setup  ROOT dependency
list(APPEND CMAKE_PREFIX_PATH $ENV{ROOTSYS})
find_package(ROOT REQUIRED)
include(${ROOT_USE_FILE})

add_subdirectory(core)

#add_subdirectory(UserDev)
#add_subdirectory(main)

add_custom_target(copy-runtime-files ALL
    COMMAND cmake -E copy_directory ${CMAKE_SOURCE_DIR}/python ${CMAKE_INSTALL_PREFIX}/python
    DEPENDS ${LarLiteAnalysis})



install(EXPORT larliteConfig DESTINATION share/larlite/cmake)

# This makes the project importable from the build directory
export(TARGETS lib FILE larliteConfig.cmake)