file(GLOB HEADERS .  *.h)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/..)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
list(REMOVE_ITEM HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/LinkDef.h)
file(GLOB SOURCES . *.cxx )

ROOT_GENERATE_DICTIONARY(G_LarLiteDataFormat ${HEADERS} LINKDEF LinkDef.h)

add_library(LarLiteDataFormat SHARED ${SOURCES} G_LarLiteDataFormat.cxx )
target_link_libraries(LarLiteDataFormat ${ROOT_LIBRARIES})
install(TARGETS LarLiteDataFormat DESTINATION lib EXPORT larliteConfig)
install(FILES ${HEADERS} DESTINATION include )
export(TARGETS LarLiteDataFormat FILE larliteConfig.cmake)


#file(GLOB applications bin/*.cc)
#foreach(_app ${applications})
#  get_filename_component (name_without_extension ${_app} NAME_WE)
#  add_executable(${name_without_extension} ${_app} )
#  target_link_libraries(${name_without_extension} LarLiteDataFormat LarLiteBase LarLiteLArUtil)
#  install(TARGETS ${name_without_extension} DESTINATION bin)
#endforeach()