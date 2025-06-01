// struct.cpp by Bill Weinman [bw.org]
// updated 2022-06-16
#include <iostream>
using std::cout;

struct S {
    int i {};
    double d {};
    const char * s {};
};

int main() {
    S s1 { 3, 47.9, "string one"};
    auto *sp = &s1;
    sp->i = 5;
    s1.d = 99.0;
    cout << "s1: " << s1.i << ", " << s1.d << ", " << s1.s << std::endl;
}
