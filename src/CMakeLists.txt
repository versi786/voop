cmake_minimum_required(VERSION 3.15)
project(voop CXX)
set (CMAKE_CXX_STANDARD 17)

enable_testing()

find_package(ZLIB REQUIRED)
find_package(GTest REQUIRED)

add_subdirectory(voop)

add_subdirectory(bin)
