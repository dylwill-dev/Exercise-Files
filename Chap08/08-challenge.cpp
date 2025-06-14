// 08-challenge.cpp by Bill Weinman [bw.org]
// updated 2022-06-01
#include <iostream>
using std::cout;

template <typename T>
T nonRecursiveFact(T num){
    int result {1};
    
    while(num >= 2){
        result *= num;
        --num;
    }
    
    return result;
}

int main() {

    auto test1 {5};
    auto t1r = nonRecursiveFact(test1);
    
    cout << test1 << "! is: " << t1r << std::endl;

    auto test2 {5.5};
    auto t2r = nonRecursiveFact(test2);
    
    cout << test2 << "! is: " << t2r << std::endl;
    
}
