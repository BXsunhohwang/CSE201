#include <iostream>
#include <cmath>



class Complex {
private:
  double real;        // the real part
  double imaginary;   // the imaginary part

  public:
    // construct the complex number zero
    Complex() { 
        real = 0;
        imaginary = 0;
    }

    // construct a complex number with given real and imaginary parts
    Complex(double real, double imaginary) {
        (*this).real = real;
        (*this).imaginary = imaginary;

    }

    double getReal() { return (*this).real;}             // get the real part of the number
    double getImaginary() {return (*this).imaginary;}        // get the imaginary part of the number
    void setReal(double re) {real = re;}      // set the value of the real part
    void setImaginary(double im) {imaginary = im;} // set the value of the imaginary part


    double magnitude() {
      double x = pow ((*this).real,2);
      double y = pow((*this).imaginary, 2);
      double nbr = x + y;
      double mag =sqrt(nbr);
      return mag;
        }           // computes the distance from the complex origin

      /*
        modifies the number so its magnitude becomes 1
        but it stays in the same direction from the complex origin, if possible. In other
      words, project the original number onto the unit circle. If that operation is not possible, the complex number must be left unchanged.
      */
    void normalize() {
      double mag = magnitude();
      imaginary = getImaginary()/mag;
      real = getReal() / mag;

    }

    ~Complex(){ std::cout << "Destroying number " << real << " + " << imaginary << "*i" << std::endl; }

};



int main() {
  Complex c1;
  Complex c2 = Complex(3,4);

  c1.normalize();

  c1.setReal(c2.getReal());
  c1.setImaginary(c2.getImaginary());

  std::cout << "c1 magnitude: " << c1.magnitude() << std::endl;
  c1.normalize();

  std::cout << "c1 is: " << c1.getReal() <<
    " + " << c1.getImaginary() << " * i" << std::endl;
  std::cout << "c1 magnitude:" << c1.magnitude() << std::endl;
}