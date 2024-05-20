#include <iostream>
#include <vector>

class Component {
public:
    virtual ~Component() {}
    virtual Component* getChild(int) { return nullptr; }
    virtual void add(Component*) {}
    virtual void remove(int) {}
    virtual void operation() = 0;
};

class Composite : public Component {
public:
    ~Composite() {
        for (Component* child : children) {
            delete child;
        }
    }

    Component* getChild(int index) {
        if (index >= 0 && index < children.size()) {
            return children[index];
        }
        return nullptr;
    }

    void add(Component* component) {
        children.push_back(component);
    }

    void remove(int index) {
        if (index >= 0 && index < children.size()) {
            delete children[index];
            children.erase(children.begin() + index);
        }
    }

    void operation() {
        for (Component* child : children) {
            child->operation();
        }
    }

private:
    std::vector<Component*> children;
};

class Leaf : public Component {
public:
    Leaf(int i) : id(i) {}
    ~Leaf() {}

    void operation() {
        std::cout << "Leaf " << id << " operation" << std::endl;
    }

private:
    int id;
};

void testAddAndGetChild() {
    Composite composite;
    Leaf* leaf = new Leaf(1);
    composite.add(leaf);
    Component* retrievedLeaf = composite.getChild(0);
    if (retrievedLeaf == leaf) {
        std::cout << "Test AddAndGetChild: PASSED" << std::endl;
    } else {
        std::cout << "Test AddAndGetChild: FAILED" << std::endl;
    }
    delete leaf;
}

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
}

void testOperation() {
    Composite composite;
    Leaf* leaf1 = new Leaf(1);
    Leaf* leaf2 = new Leaf(2);
    composite.add(leaf1);
    composite.add(leaf2);
    composite.operation();
    std::cout << "Test Operation: PASSED" << std::endl;
    delete leaf1;
    delete leaf2;
}

int main() {
    testAddAndGetChild();
    testRemoveChild();
    testOperation();
    return 0;
}
