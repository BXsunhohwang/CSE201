#include <iostream>
#include <string>

using namespace std;

class A {
private:
  int i;

public:
  A(int a) : i(a) { }

  int getI() { return i; }

  /*
   * TODO: overload the >= operator (this is just a suggestion)
   */
  bool operator>=(A& other) {
    return i>= other.i;
  }

};


/*
 * TODO: Define a generic max function that computes the maximum of 3 elements
 */
template <typename T> T max(T a, T b, T c) {
  if (a>=b && b>=c) return a;
  else if (b >= c) return b;
  return c; 
}

int main()
{
  int i1 = 10;
  int i2 = 12;
  int i3 = 7;
  cout << "max(i1, i2, i3): " << max(i1, i2, i3) << endl;

  double d1 = i1 + 0.1;
  double d2 = i2 + 0.1;
  double d3 = i3 + 0.1;
  cout << "max(d1, d2, d3): " << max(d1, d2, d3) << endl;

  string s1 = "10";
  string s2 = "12";
  string s3 = "7";
  cout << "max(s1, s2, s3): " << max(s1, s2, s3) << endl;

  A a1(i1), a2(i2), a3(i3);
  cout << "max(a1, a2, a3): " << max(a1, a2, a3).getI() << endl;

  return 0;
}


