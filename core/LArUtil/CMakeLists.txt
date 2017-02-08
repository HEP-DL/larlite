file(GLOB HEADERS .  *.h)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/..)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
list(REMOVE_ITEM HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/LinkDef.h)
file(GLOB SOURCES . *.cxx )

ROOT_GENERATE_DICTIONARY(G__LArUtil ${HEADERS} LINKDEF LinkDef.h)

add_library(LarLiteLArUtil SHARED ${SOURCES} ) #G__LArUtil.cxx
target_link_libraries(LarLiteLArUtil ${ROOT_LIBRARIES} LarLiteBase)
install(TARGETS LarLiteLArUtil DESTINATION lib)
install(FILES ${HEADERS} DESTINATION include)

file(GLOB applications bin/*.cc)
foreach(_app ${applications})
  get_filename_component (name_without_extension ${_app} NAME_WE)
  add_executable(${name_without_extension} ${_app} )
  target_link_libraries(${name_without_extension} LarLiteLArUtil LarLiteBase )
  install(TARGETS ${name_without_extension} DESTINATION bin)
endforeach()