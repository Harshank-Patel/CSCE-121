#include <iostream>

using std::cout;
using std::endl;

int main() {
    // declare (and define) an array of chars
    char A[6];
    
    // initialize array
    A[0] = 'h';
    A[1] = 'o';
    A[2] = 'w';
    A[3] = 'd';
    A[4] = 'y';
    A[5] = '\0';
    
    // (declare and) define and initialize in one line
    //char A[6] = "howdy";
    
    // print values of A (works becuase A is a C-string)
    cout << A << endl;
    
    // pointer into A, initially at A[0]
    char* p = A;
    
    // print A element-by-element
    while (*p) {
        cout << *p << endl;
        p++;
    }
    
    // add 1 to every element of A
    p = A;
    while (*p) {
        (*p)++;
        p++;
        // more compact - but nearly unreadable
        //(*(p++))++;
    }
    cout << A << endl;
    
    // write out of bounds
    // this is bad behavior, don't do this.
    A[18] = 7; // ASCII Bell (sound)
    
    // read past the end of A
    // this is bad behavior, don't do this.
    p = A;
    for (int i = 0; i <= 24; i++) {
        cout << "A[" << i << "] = " << A[i] << " (" << (int)(*((unsigned char*)(A+i))) << ")" << endl;
    }
    
    return 0;
}