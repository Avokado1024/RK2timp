cmake_minimum_required(VERSION 3.10)
project(CompositeExample)

set(CMAKE_CXX_STANDARD 11)

add_executable(CompositeExample Composite.cpp)
add_test(NAME test COMMAND test)
