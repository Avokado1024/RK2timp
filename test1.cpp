#include <iostream>
#include <cassert>

// Подключаем ваш файл с определениями классов
#include "Composite.h"

// Тесты для класса Composite
void testComposite() {
    Composite composite;
    Leaf leaf1(1);
    Leaf leaf2(2);

    // Проверка добавления дочерних элементов
    composite.add(&leaf1);
    composite.add(&leaf2);
    assert(composite.getChild(0) == &leaf1);
    assert(composite.getChild(1) == &leaf2);

    // Проверка удаления дочернего элемента
    composite.remove(0);
    assert(composite.getChild(0) == &leaf2);
    assert(composite.getChild(1) == nullptr);
}

// Тесты для класса Leaf
void testLeaf() {
    Leaf leaf(1);
    // Проверка операции листа
    leaf.operation(); // Вывод должен быть виден в консоли
}

// Тесты для проверки взаимодействия компонентов
void testCompositeAndLeaf() {
    Composite composite;
    Leaf leaf1(1);
    Leaf leaf2(2);

    composite.add(&leaf1);
    composite.add(&leaf2);

    // Проверка операции композита, которая должна вызвать операцию для каждого листа
    composite.operation(); // Вывод должен быть виден в консоли для каждого листа
}

int main() {
    testComposite();
    testLeaf();
    testCompositeAndLeaf();

}
