cmake_minimum_required(VERSION 3.10)
project(CompositeExample)

set(CMAKE_CXX_STANDARD 11)

add_executable(CompositeExample Composite.cpp)

# Добавляем тесты
add_executable(CompositeExampleTests test1.cpp)
target_link_libraries(CompositeExampleTests CompositeExample)

# Добавляем цели для тестов
add_test(NAME CompositeExampleTests COMMAND CompositeExampleTests)
