// typedef.cpp by Bill Weinman [bw.org]
// updated 2022-06-16
#include <format>
#include <iostream>
#include <cstdint>

using std::format;
using std::cout;

//typedef uint32_t points_t;
//typedef uint64_t rank_t;

//Can also create aliases with the using keyword instead of typedef
using points_t = uint32_t;
using rank_t = uint64_t;

struct score {
    points_t p {};
    rank_t r {};
};

int main() {
    score s { 5, 1 };
    cout << format("score s had {} points and a rank of {}\n", s.p, s.r);
}
