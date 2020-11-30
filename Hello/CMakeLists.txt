
find_package(Eigen3 3.3 REQUIRED NO_MODULE)
find_package(VRANavLib 0.4.0 COMPONENTS core misc-tools wgs84 nav-utils inertial-navigation gnss estimation experimental QUIET)

add_library (Hello 
  Speaker.h
  Speaker.cpp)

target_link_libraries(Hello
                        PRIVATE 
                        ${VRANavLib_LIBRARIES}
                        Eigen3::Eigen
                        )

install (TARGETS Hello DESTINATION bin)
install (FILES Speaker.h DESTINATION include)
