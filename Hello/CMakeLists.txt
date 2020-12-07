option(BUILD_SHARED_LIBS "Build shared library" OFF)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(CMAKE_DEBUG_POSTFIX d)

find_package(Eigen3 3.3 REQUIRED NO_MODULE)

add_library (Hello 
  Speaker.h
  Speaker.cpp)
set_target_properties(Hello PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

target_link_libraries(Hello
                        PRIVATE 
                        Eigen3::Eigen
                        )

install (TARGETS Hello COMPONENT Hello DESTINATION lib)
install (FILES Speaker.h DESTINATION include COMPONENT Hello)
