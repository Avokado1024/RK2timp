cmake_minimum_required(VERSION 3.10)
project(CompositeExample)

set(CMAKE_CXX_STANDARD 11)

# Создаем библиотеку из Composite.h
add_library(Composite SHARED Composite.h)


# Добавляем тесты
add_executable(CompositeExampleTests test1.cpp)
target_link_libraries(CompositeExampleTests Composite)

# Добавляем цели для тестов
add_test(NAME CompositeExampleTests COMMAND CompositeExampleTests)
