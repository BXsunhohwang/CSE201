#include <iostream>
#include <list>
#include <string>

int main(){
  
  std::list<std::string> l;
  l.push_back(" is");
  l.push_back(" fast");
  l.push_front("C++");
  l.push_back(" but");
  l.push_front(" difficult");
  l.pop_back();
  l.pop_front();

  for(std::list<std::string>::iterator iter = l.begin();
      iter != l.end();
      iter++){
    std::cout<<*iter;
  }

  std::cout << std::endl;

  return 0;
}
