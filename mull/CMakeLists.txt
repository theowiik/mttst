cmake_minimum_required(VERSION 3.22)
project(mull_demo)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        main
        src/main.cpp
        src/mathz.cpp
        src/zorter.cpp
        src/geometry.cpp
)

add_executable(
        unit_test_mathz
        test/test_mathz.cpp
        src/mathz.cpp
)

add_executable(
        unit_test_zorter
        test/test_zorter.cpp
        src/zorter.cpp
)

add_executable(
        unit_test_geometry
        test/test_geometry.cpp
        src/geometry.cpp
        src/mathz.cpp
)

# Enable testing with CTest
enable_testing()
add_test(NAME unit_test_mathz COMMAND unit_test_mathz)
add_test(NAME unit_test_zorter COMMAND unit_test_zorter)
add_test(NAME unit_test_geometry COMMAND unit_test_geometry)
