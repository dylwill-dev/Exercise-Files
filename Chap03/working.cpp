// working.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#include <iostream>

using std::cout;

int main() {
    // Example of the ternary operator
    int x = 10;
    int y = 20;
    std::string s = x < y ? "yes" : "no";

    cout << "Answer is: " << s << std::endl;
}
