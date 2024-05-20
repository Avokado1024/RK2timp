/*
 * C++ Design Patterns: Composite
 * Author: Jakub Vojvoda [github.com/JakubVojvoda]
 * 2016
 *
 * Source code is licensed under MIT License
 * (for more details see LICENSE)
 *
 */

#include <iostream>
#include <vector>

/*
 * Component
 * defines an interface for all objects in the composition
 * both the composite and the leaf nodes
 */
class Component
{
public:
  virtual ~Component() {}
  
  virtual Component *getChild( int )
  {
    return 0;
  }
  
  virtual void add( Component * ) { /* ... */ }
  virtual void remove( int ) { /* ... */ }
  
  virtual void operation() = 0;
};

/*
 * Composite
 * defines behavior of the components having children
 * and store child components
 */
class Composite : public Component
{
public:
  ~Composite()
  {
    for ( unsigned int i = 0; i < children.size(); i++ )
    {
      delete children[ i ];
    }
  }
  
  Component *getChild( const unsigned int index )
  {
    return children[ index ];
  }
  
  void add( Component *component )
  {
    children.push_back( component );
  }
  
  void remove( const unsigned int index )
  {
    Component *child = children[ index ];
    children.erase( children.begin() + index );
    delete child;
  }
  
  void operation()
  {
    for ( unsigned int i = 0; i < children.size(); i++ )
    {
      children[ i ]->operation();
    }
  }
  
private:
  std::vector<Component*> children;
};

class Leaf : public Component
{
public:
  Leaf( const int i ) : id( i ) {}
  
  ~Leaf() {}
  
  void operation()
  {
    std::cout << "Leaf "<< id <<" operation" << std::endl;
  }

private:
  int id;
};




void testAddAndGetChild() {
  Composite composite;
  Leaf *leaf = new Leaf(1);
  composite.add(leaf);
  Component *retrievedLeaf = composite.getChild(0);
  if (retrievedLeaf == leaf) {
    std::cout << "Test AddAndGetChild: PASSED" << std::endl;
  } else {
    std::cout << "Test AddAndGetChild: FAILED" << std::endl;
  }
  delete leaf;
}

void testRemoveChild() {
  Composite composite;
  Leaf *leaf = new Leaf(1);
  composite.add(leaf);
  composite.remove(0);
  Component *retrievedLeaf = composite.getChild(0);
  if (retrievedLeaf == nullptr) {
    std::cout << "Test RemoveChild: PASSED" << std::endl;
  } else {
    std::cout << "Test RemoveChild: FAILED" << std::endl;
  }
}

void testOperation() {
  Composite composite;
  Leaf *leaf1 = new Leaf(1);
  Leaf *leaf2 = new Leaf(2);
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
  testRemoveChild();
  testOperation();
  return 0;
}
