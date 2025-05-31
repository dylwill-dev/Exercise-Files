// pointers.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#include <iostream>

using std::cout;

int main() {
    int x {7};
    int *ip = &x;
    int &y = x; // y is a reference to x
    

    std::cout << "The value of x is: " << x << std::endl;
    std::cout << "The value of y is: " << y << std::endl;
    std::cout << "The value of *ip is: " << *ip << std::endl; 

    
    x*=2; // Modifying x will also modify y and *ip
    
    std::cout << "The value of x is: " << x << std::endl;
    std::cout << "The value of y is: " << y << std::endl;
    std::cout << "The value of *ip is: " << *ip << std::endl;

    y *= 2; // Modifying y will also mofify x and *ip

    std::cout << "The value of x is: " << x << std::endl;
    std::cout << "The value of y is: " << y << std::endl;
    std::cout << "The value of *ip is: " << *ip << std::endl;

    
}
