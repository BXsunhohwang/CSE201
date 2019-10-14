#include <iostream>
#include <cmath>

#include "Complex.hpp"


Complex::Complex() {
  real = 0.0;
  imaginary = 0.0;
}

Complex::Complex(double real, double imaginary) {
  this->real = real;
  this->imaginary = imaginary;
}

double Complex::getReal() {
  return real;
}

double Complex::getImaginary() {
  return imaginary;
}

void Complex::setReal(double re) {
  real = re;
}

void Complex::setImaginary(double im) {
  imaginary = im;
}

double Complex::magnitude() {
  return std::sqrt(std::pow(real, 2) + pow(imaginary, 2));
}

void Complex::normalize() {
  double magnitude_val = magnitude();

  if (magnitude_val != 0) {
    real = real / magnitude_val;
    imaginary = imaginary / magnitude_val;
  }
}

Complex::~Complex() {
  std::cout << "Destroying number " << real << " + " << imaginary << " * i" << std::endl;
}
