// range-for.cpp by Bill Weinman [bw.org]
// updated 2022-05-23

#include <iostream>
#include <typeinfo>
using std::cout;

void printArray(auto &arr){
    int counter = 1;
    for (const auto &e : arr){
        if (typeid(e).name()[0] == 'c' && e == 0) break; // Break out of the loop if it is a char and null termination
        cout << "Element" << counter << " is: " << e << std::endl;
        ++counter;
    }
}

int main() {
    int integers[] { 1, 2, 3, 0, 4, 5 };
    char letters[] {"letters"};
    float decimals[] {1.0f, 1.5f, 2.1f, 3.5f};

    // Testing function with different data types
    std::cout << "Printing out integer array: " << std::endl; 
    printArray(integers);
    std::cout << std::endl; 
    
    std::cout << "Printing out character array: " << std::endl; 
    printArray(letters);
    std::cout << std::endl; 
    
    std::cout << "Printing out decmial array: " << std::endl; 
    printArray(decimals);
    std::cout << std::endl; 
}
