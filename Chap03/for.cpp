// for.cpp by Bill Weinman [bw.org]
// updated 2022-06-15
#include <iostream>

int main() {
    int array[] = { 1, 2, 3, 4, 5 };

    // C style for loop
    for (int i = 0; i < 5; ++i) {
       std::cout << "Element " << i+1 << " has the value: " << array[i] << std::endl;
    }

    char string[] = {"string"};
    int counter = 0;
    for (const auto &letter : string){
        ++counter;
        if (counter == sizeof(string)) break;
        std::cout << "Letter number " << counter << " is: " << letter << std::endl;

    }

     std::cout << std::endl; // Give space

    // Can iterate through the character array with a pointer as well
    // *ptr as the condition continues the loop until it points to a zero '\0' null terminator
    char string2[] = {"string2"};
    int counter2 = 1;
    for(auto *ptr = string2; *ptr; ++ptr){
        std::cout << "Element " << counter2 << " is: " << *ptr << std::endl;
        ++counter2;
    }
}
