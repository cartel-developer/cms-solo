cmake_minimum_required(VERSION 3.17)
project(cms-solo)

set(CMAKE_CXX_STANDARD 17)

add_executable(cms1 main.cpp)
target_include_directories(cms1 PRIVATE src)