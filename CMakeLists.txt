project(CompositeExample)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Создаем библиотеку из Composite.cpp
add_library(Composite SHARED Composite.cpp)

# Добавляем исполняемый файл, который использует Composite
add_executable(CompositeExample main.cpp)
target_link_libraries(CompositeExample PRIVATE Composite)

# Добавляем тесты
add_executable(CompositeExampleTests test1.cpp)
target_link_libraries(CompositeExampleTests PRIVATE Composite)

# Добавляем цели для тестов
add_test(NAME CompositeExampleTests COMMAND CompositeExampleTests)

