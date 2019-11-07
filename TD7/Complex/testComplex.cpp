#include "Complex.hpp"

int main() {
  // declare complex numbers
  Complex<int> a(1, 2);       // a = 1 + 2i
  Complex<int> b(3, 4);       // b = 3 + 4i

  // print the result of basic operations
  (a + b).print();
  (a - b).print();
  (a * b).print();
  (a * a - b * b).print();
  ((a + b) * (a - b)).print();

  Complex<double> c(1.3, 2.4);
  Complex<double> d(3.2, 4.7);

  (c * d).print();

  return 0;
}
