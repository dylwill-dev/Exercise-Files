// template-class.cpp by Bill Weinman [bw.org]
// updated 2022-06-21
#include <iostream>
#include <memory>
#include <string>
#include <exception>
using std::cout;

namespace bw {

// simple exception class
class S_err : public std::exception {
    const char * msg;
public:
    S_err() = delete;    // no default constructor
    explicit S_err(const char * s) noexcept : msg(s) { }
    const char * what() const noexcept { return msg; }
};

// simple fixed-size LIFO stack template
template <typename T>
class Stack {
    static const int default_size {10};
    static const int max_size {1000};
    int S_size {};
    int S_top {};
    std::unique_ptr<T[]> S_ptr {}; // This is a type of smart pointer
public:
    explicit Stack(int s = default_size);
    ~Stack() { if(S_ptr) S_ptr.release(); }
    T& push(const T&);
    T& pop();
    bool is_empty() const { return S_top < 0; }
    bool is_full() const { return S_top >= S_size - 1; }
    int top() const { return S_top; }
    int size() const { return S_size; }
};

// Stack<T> constructor
template<typename T>
Stack<T>::Stack(int s) {
    if (s > max_size || s < 1) throw S_err("invalid stack size");
    else S_size = s;
    S_ptr.reset(new T[S_size]);
    S_top = -1;
}

template<typename T>
T& Stack<T>::push( const T & i ) {
    if (is_full()) throw S_err("stack full");
    return S_ptr[++S_top] = i;
}

template<typename T>
T& Stack<T>::pop() {
    if (is_empty()) throw S_err("stack empty");
    return S_ptr[S_top--];
}

} // namespace bw

int main() {
    bw::Stack<int> si {5};
    bw::Stack<std::string> ss {5};

    try {
        cout << "si size: " << si.size() << std::endl;
        cout << "si top:" << si.top() << std::endl;
        
        for ( int i : { 1, 2, 3, 4, 5 } ) {
            si.push(i);
        }
        
        cout << "si top after pushes: " << si.top();
        std::string check = si.is_full() ? " " : "not";
        cout << "si is" << check << " full " << std::endl;
        
        while(!si.is_empty()) {
            cout << "popped " << si.pop() << std::endl;
        }

        cout << "ss size: " << ss.size() << std::endl;
        cout << "ss top: " << ss.top() << std::endl;

        for ( const char * s : {"one", "two", "three", "four", "five"} ) {
            ss.push(s);
        }

        cout << "ss top after pushes: " << ss.top() << std::endl;
        check = ss.is_full() ? " " : "not";
        cout << "ss is" << check << " full" << std::endl;

        while(!ss.is_empty()) {
            cout << "popped " << ss.pop() << std::endl;
        }
    } catch (bw::S_err & e) {
        std::cout << "Stack error: " << e.what() << std::endl;
        return 1;
    }
}
