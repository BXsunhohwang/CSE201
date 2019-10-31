//
//  Farm.cpp
//  AnimalFarm
//
//  Created by Sunho Hwang on 30/10/2019.
//  Copyright © 2019 Sunho Hwang. All rights reserved.
//

#include <iostream>
#include "Farm.hpp"


Dog::Dog(const std::string &dogname): name(dogname){
}

void Dog::sound() {
    std::cout << name << " says \"ouaf! ouaf!\""<< std::endl;
}

Pig::Pig(const std::string &pigname):name(pigname) {
}

void Pig::sound() {
    std::cout << name << " says \"groin! groin!\""<< std::endl;
}
