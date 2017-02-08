file(GLOB HEADERS .  *.h)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/..)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
list(REMOVE_ITEM HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/LinkDef.h)
file(GLOB SOURCES . *.cxx )

ROOT_GENERATE_DICTIONARY(G__LarLiteAnalysis ${HEADERS} LINKDEF LinkDef.h)

add_library(LarLiteAnalysis SHARED ${SOURCES} )#
target_link_libraries(LarLiteAnalysis ${ROOT_LIBRARIES})
install(TARGETS LarLiteAnalysis DESTINATION lib EXPORT larlite-targets)
install(FILES ${HEADERS} DESTINATION include )

file(GLOB applications bin/*.cc)
foreach(_app ${applications})
  get_filename_component (name_without_extension ${_app} NAME_WE)
  add_executable(${name_without_extension} ${_app} )
  target_link_libraries(${name_without_extension} LarLiteAnalysis LarLiteDataFormat LarLiteBase LarLiteLArUtil)
  install(TARGETS ${name_without_extension} DESTINATION bin)
endforeach()