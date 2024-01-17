cmake_minimum_required(VERSION 3.22)
project(cpp_app)

set(CMAKE_CXX_STANDARD 17)

# Main executable
add_executable(main main.cpp mathz.cpp)

# Test executable (renamed to avoid conflict with CTest reserved name)
add_executable(my_tests test.cpp mathz.cpp)

# If your catch.hpp is in a subdirectory, add it to the include directories
# target_include_directories(my_tests PRIVATE path/to/catch)

# Enable testing with CTest
enable_testing()
add_test(NAME MyCatchTest COMMAND my_tests)
