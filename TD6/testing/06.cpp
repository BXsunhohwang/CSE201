#include <iostream>

class A {
public:
  virtual void print() { std::cout << "A" << std::endl; }
};

class B : public A {
public:
  void print() { std::cout << "B" << std::endl; }
};

int main()
{
  /*
  A *a = new A();
  a->print();
  B *b = new B();
  b->print();
  */
  A *ba = NULL;
  
  int i;
  std::cin >> i;

  if (i > 0) {
    ba = new A(); 
  } else {
    ba = new B();
  }
  
  ba->print();
}


