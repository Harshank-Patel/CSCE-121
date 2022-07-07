#include <iostream>

using std::cout;
using std::endl;

void foo(int& n) {
    // parameter n is passed by reference
    n++;
}

int main() {
    int count = 1;
    int& countRef = count;

    // increment value of count
    countRef++;
    
    // print value of count (should be 2)
    cout << count << endl;
    
    // increment value of count (because pass by reference)
    foo(count);
    
    // print value of count (should be 3)
    cout << count << endl;
    
    // increment value of count (because pass by reference^2)
    foo(countRef);
    
    // print value of count (should be 4)
    cout << count << endl;
}