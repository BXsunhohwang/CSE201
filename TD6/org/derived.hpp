#pragma once
#include "base.hpp"

class Derived : public Base {
public:
  double w;
  Derived(int a, int b, double c, double d);
  ~Derived();
};