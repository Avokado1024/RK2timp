cmake_minimum_required(VERSION 3.10)
project(CompositeExample)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Создаем библиотеку из Composite.h
add_executable(CompositeExample Composite.cpp)
enable_testing()
# Добавляем тесты
add_executable(CompositeExampleTests test1.cpp)
target_link_libraries(CompositeExampleTests Composite)

# Добавляем цели для тестов
add_test(NAME CompositeExampleTests COMMAND CompositeExampleTests)
