#include <iostream>

int main(){
    int array[5] = {1,2,3,4,5};
    int *p;
    
    for (p = array; p < (array + 4); p++) {
        *(p+1) = *p * *(p+1);
    }
    
    for (p = array; p < (array + 5); p++) {
        std::cout << "Value is: " << *p << std::endl;
    }
}
