#include <iostream>
#include <cmath>

#include "Complex.hpp"


Complex::Complex() {
  real = 0.0;
  imaginary = 0.0;
}

double Complex:: maxreal;
double Complex:: maxim;
double Complex:: maxmag;


Complex::Complex(double real, double imaginary) {
  this->real = real;
  this->imaginary = imaginary;
  (*this).setmax();
}

double Complex::getReal() {
  return real;
}

double Complex::getImaginary() {
  return imaginary;
}

void Complex::setReal(double re) {
  real = re;
  (*this).setmax();
}

void Complex::setImaginary(double im) {
  imaginary = im;
  (*this).setmax();
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

void Complex::setmax() {
    if (std::sqrt(std::pow(real, 2) + pow(imaginary, 2))>maxmag) {
    maxmag = std::sqrt(std::pow(real, 2) + pow(imaginary, 2));
    maxreal = real;
    maxim = imaginary;
  }

}

void Complex::printMaxComplex() {
  std::cout << "(" <<maxreal << ","<<maxim << ")" << std::endl;

}

Complex Complex::fromMax() {
  return Complex(maxreal,maxim);
}

Complex Complex::operator-() {
    return Complex(-real, -imaginary);
}


Complex Complex::operator+(const Complex& other) {
    return Complex(real+other.real, imaginary + other.imaginary);
}

Complex Complex::operator-(const Complex& other) {
    return Complex( real - other.real, imaginary - other.imaginary);
}

Complex Complex::operator*(const Complex& other) {
    return Complex( real*other.real - imaginary*other.imaginary, real*other.imaginary + imaginary*other.real);
}

bool Complex::operator==(const Complex &other) {
    return real==other.real && imaginary == other.imaginary;
}

bool Complex::operator!=(const Complex &other) {
    return real != other.real || imaginary!= other.imaginary;
}

Complex::~Complex() {
  std::cout << "Destroying number " << real << " + " << imaginary << " * i" << std::endl;
}
