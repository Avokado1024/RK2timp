#include <iostream>
#include <vector>
#include <algorithm>

class Component {
public:
    virtual ~Component() {};
    virtual void operation() = 0;
};

class Leaf : public Component {
public:
    Leaf(const std::string& value) : value(value){}
    void operation() override {
        std::cout << value << std::endl;
    }
private:
    std::string value;
};

class Composite : public Component {
public:
    void add(Component* component) {
        children.push_back(component);
    }

    void remove(Component* component) {
        children.erase(std::remove(children.begin(), children.end(), component), children.end());
    }

    void operation() override {
        for (Component* child : children) {
            child->operation();
        }
    }

private:
    std::vector<Component*> children;
};


int main() {
    // Тест 1: Операция с одним листом

    Leaf single_leaf("Leaf 1 operation");
    single_leaf.operation(); 

    // Тест 2: Добавление листьев в составной элемент и проверка операций

    Leaf leaf_1("Leaf 1 operation"), leaf_2("Leaf 2 operation");
    Composite composite;
    composite.add(&leaf_1);
    composite.add(&leaf_2);
    composite.operation();  

    // Тест 3: Удаление листа из составного элемента и проверка операций

    Leaf leaf_3("Leaf 3 operation");
    composite.add(&leaf_3);
    composite.operation();
    composite.remove(&leaf_3);  
    composite.operation();

    return 0;
}
