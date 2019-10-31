#include <iostream>
#include <string>

class Animal {
public:
    
  virtual std::string getType() { return "";}
  virtual std::string getName() { return "";}
  virtual std::string getNoise() {return "";}
    
  void sound() {
      std::string noise = getNoise();
      std::string name = getName();
      if (name =="")
          std::cout<< "A " << getType();
      else
              std::cout << name << " the " << getType();
      if(noise=="")
          std::cout << " does not make noise";
      else
          std::cout << " says \"" << noise << "\"";
      std::cout << std::endl;
            
          
      }
};

class Dog : public Animal {
private:
  std::string name;
public:
  Dog(const std::string &nm) { name = nm; }
  std::string getType()  { return "dog"; }
  std::string getName()  { return name; }
  std::string getNoise() { return "ouaf! ouaf!"; }
};

/* anonymous */
class Chicken : public Animal {
public:
  std::string getType()  { return "chicken"; }
  std::string getNoise() { return "cot cot codet!"; }
};

/* silent and anonymous */
class Spider : public Animal {
public:
  std::string getType()  { return "spider"; }
};

int main()
{
  Animal **farm = new Animal*[3];

  farm[0] = new Dog("Milou");
  farm[1] = new Chicken;
  farm[2] = new Spider;

  for(int i = 0; i < 3; i ++)
    farm[i]->sound();
  for (int i = 0; i < 3; i++)
    delete farm[i];
  delete[] farm;
}
