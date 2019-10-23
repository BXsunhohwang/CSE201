#pragma once

class Complex {
private:
  double real;        // the real part
  double imaginary;  // the imaginary part
  static double maxreal;
  static double maxim;
  static double maxmag;

  public:
    // construct the complex number zero
    Complex();

    // construct a complex number with given real and imaginary parts
    Complex(double real, double imaginary);
    
    Complex operator-();                     // complex negation

    Complex operator+(const Complex &other); // complex addition
    Complex operator-(const Complex &other); // complex subtraction
    Complex operator*(const Complex &other); // complex multiplication

    bool operator==(const Complex &other);   // pointwise comparison
    bool operator!=(const Complex &other);   // inverse of above

    double getReal();
    double getImaginary();
    void setReal(double re);
    void setImaginary(double im);
    double magnitude();
    void normalize();
    void setmax();
    static void printMaxComplex();
    static Complex fromMax();
    ~Complex();
};
