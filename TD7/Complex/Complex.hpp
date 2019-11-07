#include <iostream>
#include <string>

template <class T>
class Complex {
private:
  T real;        // the real part
  T imaginary;  // the imaginary part

  public:
    // construct the complex number zero
    Complex() {};

    // construct a complex number with given real and imaginary parts
    Complex(T real, T imaginary){
      this->real = real;
      this->imaginary = imaginary;
    };
    

    Complex operator+(const Complex &other) {
      return Complex(real+other.real, imaginary + other.imaginary);
    }; // complex addition
    Complex operator-(const Complex &other) {
      return Complex( real - other.real, imaginary - other.imaginary);
    }; // complex subtraction
    Complex operator*(const Complex &other) {
      return Complex( real*other.real - imaginary*other.imaginary, real*other.imaginary + imaginary*other.real);
    }; // complex multiplication

    void print() {
      std::cout << real << " + " << imaginary << " * i" << std::endl;
    } 
};
