// array.cpp by Bill Weinman [bw.org]
// updated 2022-05-25
#include <iostream>
using std::cout;

int main() {
    int array[] { 1, 2, 3, 4, 5 };
    for(const int& i : array) {
        cout << i << std::endl;
    }
    cout << '\n';
}
