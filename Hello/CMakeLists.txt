
find_package(Eigen3 3.3 REQUIRED NO_MODULE)
find_package(yaml-cpp)

add_library (Hello 
  Speaker.h
  Speaker.cpp)

target_link_libraries(Hello
                        PRIVATE 
                        Eigen3::Eigen
                        yaml-cpp
                        )

install (TARGETS Hello DESTINATION bin)
install (FILES Speaker.h DESTINATION include)
