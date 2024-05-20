#include "Composite.h" 



void testRemoveChild() {
    Composite composite;
    Leaf* leaf = new Leaf(1);
    composite.add(leaf);
    composite.remove(0);
    Component* retrievedLeaf = composite.getChild(0);
    if (retrievedLeaf == nullptr) {
        std::cout << "Test RemoveChild: PASSED" << std::endl;
    } else {
        std::cout << "Test RemoveChild: FAILED" << std::endl;
    }
    delete leaf; // Удаляем объект leaf, чтобы избежать утечки памяти
}

void testOperation() {
    Composite* composite = new Composite(); // Создаем объект composite в куче
    Leaf* leaf1 = new Leaf(1);
    Leaf* leaf2 = new Leaf(2);
    composite->add(leaf1);
    composite->add(leaf2);
    composite->operation();
    std::cout << "Test Operation: PASSED" << std::endl;
    delete leaf1;
    delete leaf2;
    delete composite; // Удаляем объект composite, чтобы избежать утечки памяти
}

int main() {
    testRemoveChild();
    testOperation();
    return 0;
}
