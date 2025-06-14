// template-function.cpp by Bill Weinman [bw.org]
// updated 2022-06-04
#include <iostream>
#include <string>

using std::cout;


template<typename T> // Here 'T' functions as a placeholder for a given type.
T maxof(T a, T b) {
    return a > b ? a : b;
}

int main() {
    // We can call maxof with several different data types using the same function definition and implementation

    // First with ints
    int x {47};
    int y {73};
    auto z = maxof<int>(x, y); // We specify the type within angle brackets <int> when we call this type of function
    cout << "max for example 1 is " << z << std::endl;

    // Second with doubles
    double a {21.53};
    double b {33.11};
    auto c = maxof<double>(a,b);
    cout << "max for example 2 is " << c << std::endl;

    // Third with strings
    std::string d {"Adam"};
    std::string e {"Samantha"};
    auto f = maxof<std::string>(d, e);
    cout << "max for example 3 is " << f << std::endl;
    
    // It is worth nothing that the type can be deduced when calling maxof like so:
    std::string str1 {"Rodger"};
    std::string str2 {"Redgie"};
    auto deduce = maxof(str1, str2);
    cout << "max for example 4 (deduced) is " << deduce << std::endl;

    return 0;
}
