#include "base.hpp"
#include <iostream>

Base::Base(int a, int b, double c ) {
    this->x = a;
    this->y = b;
    this->z = c;
  }

Base:: ~Base() {
  std::cout << "Deleting Base" << std::endl;
}



