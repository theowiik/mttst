cmake_minimum_required(VERSION 3.22)
project(dextool_demo)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        main
        src/main.cpp
        src/mathz.cpp
        src/zorter.cpp
)

add_executable(
        unit_tests
        test/test_mathz.cpp
        test/test_zorter.cpp
        src/mathz.cpp
        src/zorter.cpp
)

# Enable testing with CTest
enable_testing()
add_test(NAME UnitTests COMMAND unit_tests)
