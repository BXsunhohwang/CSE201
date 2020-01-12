//
//  main.cpp
//  Main
//
//  Created by Sunho Hwang on 19/09/2019.
//  Copyright © 2019 Sunho Hwang. All rights reserved.
//

#include <iostream>

int main()  {
    std::cout << "Enter N: ";
    int n;
    std::cin >> n;
    bool arr[n-1];
    for (int i=0;i<n-1;i++){
        arr[i] = true;
    }
    for (int i=0; i< n-1;i++) {
        int k = i+2;
        int j = i ;
        if (arr[i]==true) {
            while (j<n-1) {
                arr[j+k] = false;
                j = j+k;
            }
        }
    }
    for (int i=0; i<n-1;i++) {
        if (arr[i] == true) {
            std::cout <<i+2<< std::endl;
        }
    }
    return 0;
}

