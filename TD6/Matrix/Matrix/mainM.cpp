#include <iostream>

#include "Matrix.hpp"

int main()
{
  Matrix m1(2, 2);
  m1.setMatrixValue(0, 0, 1);
  m1.setMatrixValue(0, 1, 0);
  m1.setMatrixValue(1, 0, 1);
  m1.setMatrixValue(1, 1, -1);

  Matrix m2(2, 2);
  m2.setMatrixValue(0, 0, 1);
  m2.setMatrixValue(0, 1, 0);
  m2.setMatrixValue(1, 0, 0);
  m2.setMatrixValue(1, 1, 1);

  std::cout << m1 << std::endl;
  std::cout << m2 << std::endl;

  std::cout << m1 + m2 << std::endl;
  std::cout << m2 + m1 << std::endl;
  std::cout << m1 * m2 << std::endl;
  std::cout << m2 * m1 << std::endl;

  return 0;
}
