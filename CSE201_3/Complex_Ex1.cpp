class Complex {
private:
  double real;        // the real part
  double imaginary;   // the imaginary part

  public:
    // construct the complex number zero
    Complex();

    // construct a complex number with given real and imaginary parts
    Complex(double real, double imaginary);
};