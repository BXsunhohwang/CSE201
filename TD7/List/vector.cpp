#include <iostream>
#include <vector>

class myClass {
private:
  int i;

public:
  myClass(int i) {
    this->i = i;
  }

  int getI() { return i; }
};

int main(){
  std::vector<myClass> v;
  v.push_back(myClass(1));
  v.push_back(myClass(2));
  v.push_back(myClass(3));
  v.push_back(myClass(4));

  for (int i = 0; i < v.size(); i ++) {
    std::cout << v[i].getI() << std::endl;
  }

  return 0;
}
