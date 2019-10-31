//
//  Farm.hpp
//  AnimalFarm
//
//  Created by Sunho Hwang on 30/10/2019.
//  Copyright © 2019 Sunho Hwang. All rights reserved.
//

#include <iostream>
#pragma once

class Animal {
public:
  virtual void sound() { /* do nothing by default */ }
};

class Dog: public Animal {
private:
    std::string name;

public:
    Dog(const std::string &dogname);
    void sound();
    
};

class Pig: public Animal {
private:
    std::string name;
public:
    Pig(const std::string &pigname);
    void sound();
    
};


