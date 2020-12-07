
find_package(Eigen3 3.3 REQUIRED NO_MODULE)

add_library (Hello 
  Speaker.h
  Speaker.cpp)

target_link_libraries(Hello
                        PRIVATE 
                        Eigen3::Eigen
                        )

install (TARGETS Hello  COMPONENT Hello DESTINATION bin)
install (FILES Speaker.h DESTINATION include COMPONENT Hello)
