// while.cpp by Bill Weinman [bw.org]
// updated 2022-06-15
#include <iostream>
using std::cout;
using std::endl;

int main() {
    int array[] { 1, 2, 3, 4, 5 };
    int i {0};

    while (i < 5) {
        if (i == 3) break;
        if (i == 1){
            ++i;
            continue;
        }
        cout << "Element " << i << " is: " << array[i] << endl;
        ++i;
    }
}
