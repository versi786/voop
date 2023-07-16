add_library(voop_net STATIC dns.cpp)

target_include_directories(voop_net PUBLIC ${CMAKE_SOURCE_DIR})
target_link_libraries(voop_net PUBLIC voop_core)


enable_testing()
add_executable(voop_net_test dns.g.cpp)
target_link_libraries(
  voop_net_test
  GTest::gtest_main
)
include(GoogleTest)
gtest_discover_tests(voop_net_test)
