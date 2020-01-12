//
//  ovfusc.cpp
//  TD2
//
//  Created by Sunho Hwang on 01/10/2019.
//  Copyright © 2019 Sunho Hwang. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


char Randomchar() {
    int randn = ((rand() % 25) +65);
    if ((rand() % 2) == 1) {
        return (char) randn;
    } else {
        return (char) randn + 32;
    }
}

bool ispunct(char input) {
    bool punctuation = false;
    char punct[] = { ' ', ',', ';', '.', '!', '?'};
    int n = 6;
    for (int i=0; i < n; i++) {
        if (input == punct[i]) punctuation = true;
    }
    return punctuation;
}

int obscf(std::string & str) {
    int word_count = 0;
    int hammings = 0;
    for (int i=0; i< str.length(); i++) {
        if (ispunct(str[i])) word_count = word_count + 1;
        
        if ((word_count != 1) && (! ispunct(str[i]))) {
            char replace = Randomchar();
            if (str[i] != replace){
                hammings = hammings + 1;
            }
            str[i] = replace;
            
        }
    }
    
    
    
    return hammings;
}

int main() {
    std::string str;
    std::getline(std::cin, str);
    int hammings = obscf(str);
    std::cout << str << " " <<"(" << hammings << ")" << std::endl ;
    return 0;
    
}
