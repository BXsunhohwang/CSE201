#include <iostream>
#include <string>
using namespace std;

class A {
private:
  int i;

public:
  A(int a) : i(a) { }

    bool operator==(const A &compare) {
        return compare.i == i;
    }
};

template <typename T> bool equal(T a, T b) {
    return a==b;
    
}

int main()
{
  int i1 = 10;
  int i2 = 10;
  cout << "equal(i1, i2): " << equal(i1, i2) << endl;

  double d1 = 10.5;
  double d2 = 3.7;
  cout << "equal(d1, d2): " << equal(d1, d2) << endl;

  string s1 = "Hello";
  string s2 = "Hello";
  cout << "equal(s1, s2): " << equal(s1, s2) << endl;

  A a1(1), a2(1), a3(2);
  cout << "equal(a1, a2): " << equal(a1, a2) << endl;
  cout << "equal(a1, a3): " << equal(a1, a3) << endl;

  return 0;
}
