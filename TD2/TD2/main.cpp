//
//  main.cpp
//  TD2
//
//  Created by Sunho Hwang on 02/10/2019.
//  Copyright © 2019 Sunho Hwang. All rights reserved.
//

#include <iostream>

#include <iostream>

int main(){
  int array[5] = {1,2,3,4,5};

  int *p1;
  int **pp1;
  int*& p2 = p1;

  p1 = array;
  pp1 = &p1;

  p2 = array + *p1;
  p1 = p1 + *p2;

  std::cout << *pp1 << std::endl;
  std::cout << p1 << std::endl;
}

