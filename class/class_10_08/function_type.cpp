#include <iostream>
#include <functional>

using std::cout;
using std::cin;
using std::endl;
using std::function;

void foo() {
    cout << "foo" << endl;
}

int bar() {
    cout << "bar" << endl;
    return 1;
}

void baz(const char str[]) {
    cout << "baz: \"" << str << "\"" << endl;
}

void do_func(void (*f)()) {
    cout << "C-style" << endl;
    f();
}

void do_func(function<void()> f) {
    cout << "C++-style" << endl;
    f();
}

int main() {
    foo();
    
    // the C way
    void (*f)() = foo;
    f();
    
    int (*b)() = bar;
    b();
    
    void (*z)(const char[]) = baz;
    z("hello");
    
    do_func(foo);
    
    
    // the C++11 way
    function<void()> F = foo;
    F();
    
    function<int()> B = bar;
    B();
    
    function<void(const char[])> Z = baz;
    Z("howdy");
    
    do_func(F);
}