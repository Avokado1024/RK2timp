cmake_minimum_required(VERSION 3.10)
project(CompositeExample)

set(CMAKE_CXX_STANDARD 11)

add_executable(CompositeExample Composite.cpp)
enable_testing()
add_executable(MyTest test.cpp)
add_test(NAME MyTest COMMAND MyTest)
