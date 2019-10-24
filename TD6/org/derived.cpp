
#include "derived.hpp"
#include <iostream>

Derived::Derived(int a, int b, double c, double d)
    : Base(a, b, c)
  {
    this->w = d;
  }

Derived::~Derived() {
    std::cout <<"Deleting Derived" << std::endl;

}