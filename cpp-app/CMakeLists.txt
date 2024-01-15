cmake_minimum_required(VERSION 3.27)
project(cpp_app)

set(CMAKE_CXX_STANDARD 17)

add_executable(main main.cpp mathz.cpp)
add_executable(test test.cpp mathz.cpp)
