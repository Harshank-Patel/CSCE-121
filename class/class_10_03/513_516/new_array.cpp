#include <iostream>

using std::cout;
using std::endl;
using std::ostream;

void print_array(int* A, int len, ostream& out) {
    for (int i = 0; i < len; i++) {
        out << A[i] << " ";
    }
    out << endl;
}

// array deep copy
int* shallow_copy(int* A, int len) {
    return A;
}

// array deep copy
int* deep_copy(int* A, int len) {
    // make new space
    int* B = new int[len];
    
    // copy values
    for (int i = 0; i < len; i++) {
        B[i] = A[i];
    }
    
    return B;

}

int main() {
    
    int* a = new int[7];
    a[0] = 8;
    a[1] = 6;
    a[2] = 7;
    a[3] = 5;
    a[4] = 3;
    a[5] = 0;
    a[6] = 9;
    int* b;
    
    // copy a to b
    // shallow copy
    //b = a;
    b = shallow_copy(a, 7);
    
    cout << &a << endl;
    cout << &b << endl;
    
    cout << a << endl;
    cout << b << endl;
    
    cout << "a = ";
    print_array(a,7,cout);
    cout << "b = ";
    print_array(b,7,cout);
    
    a[0] = 7;
    
    cout << "a = ";
    print_array(a,7,cout);
    cout << "b = ";
    print_array(b,7,cout);
    
    // deep copy
    int* c = deep_copy(a, 7);
    
    cout << "a = ";
    print_array(a,7,cout);
    cout << "c = ";
    print_array(c,7,cout);
    
    a[0] = 1;
    
    cout << "a = ";
    print_array(a,7,cout);
    cout << "c = ";
    print_array(c,7,cout);
    
    c[0] = 2;
    
    cout << "a = ";
    print_array(a,7,cout);
    cout << "c = ";
    print_array(c,7,cout);
    
    
    delete[] a;
    delete[] c;
    
}