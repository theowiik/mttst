cmake_minimum_required(VERSION 3.10)
project(MyMathProject)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executable for the main program
add_executable(MyMath main.cpp math_utils.cpp)

# Add executable for tests
add_executable(MyMathTests tests.cpp math_utils.cpp)
