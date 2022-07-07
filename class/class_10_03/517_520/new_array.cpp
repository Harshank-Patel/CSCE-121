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

int* shallow_copy(int* A) {
    return A;
}

int* deep_copy(int* A, int len) {
    // allocate space for new array
    int* B = new int[len];
    
    // copy values
    for (int i = 0; i < len; i++) {
        B[i] = A[i];
    }
    
    return B;
}

int main() {
    int len = 7;
    int* a = new int[len];
    for (int i = 0; i < len; i++) {
        // hacky nonsense, don't do it.
        a[i] = "8675309"[i]-'0';
    }
    int* b;
    
    b = shallow_copy(a);
    
    cout << "a @ " << &a << endl;
    cout << "b @ " << &b << endl;
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    cout << "a = ";
    print_array(a,7,cout);
    cout << "b = ";
    print_array(b,7,cout);
    
    a[0] = 1;
    
    cout << "a = ";
    print_array(a,7,cout);
    cout << "b = ";
    print_array(b,7,cout);
    
    b = deep_copy(a, len);
    
    cout << "a @ " << &a << endl;
    cout << "b @ " << &b << endl;
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    cout << "a = ";
    print_array(a,7,cout);
    cout << "b = ";
    print_array(b,7,cout);
    
    a[0] = 2;
    
    cout << "a = ";
    print_array(a,7,cout);
    cout << "b = ";
    print_array(b,7,cout);
    
    delete[] a;
    delete[] b;
    
    /*
    int* a = new int(5);
    int* b;
    
    cout << "a @ " << &a << endl;
    cout << "b @ " << &b << endl;
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    cout << "*a = " << *a << endl;
    cout << "*b = <garbage>" << endl;
    
    // copy a to b
    b = a;
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    cout << "*a = " << *a << endl;
    cout << "*b = " << *b << endl;
    
    *a = 7;
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    cout << "*a = " << *a << endl;
    cout << "*b = " << *b << endl;
    */
}