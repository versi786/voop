add_executable(vig vig.m.cpp)
target_link_libraries(vig ZLIB::ZLIB glog::glog fmt::fmt voop_net voop_core)
