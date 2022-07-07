#include <iostream>

using std::cout;
using std::endl;

void foo(int p) {
    p++;
}

void foo(int* p) {
    (*p)++;
}

void foo(int** p) {
    (**p)++;
}

int main() {
    int i = 12;
    int* ptr_to_i = &i;
    int** ptr_to_ptr_to_i = &ptr_to_i;
     
    cout << "                i = " << i << endl;
    cout << "               &i = " << &i << endl;
    cout << "         ptr_to_i = " << ptr_to_i << endl;
    cout << "        *ptr_to_i = " << *ptr_to_i << endl;
    cout << "        &ptr_to_i = " << &ptr_to_i << endl;
    cout << "  ptr_to_ptr_to_i = " << ptr_to_ptr_to_i << endl;
    cout << " *ptr_to_ptr_to_i = " << *ptr_to_ptr_to_i << endl;
    cout << "**ptr_to_ptr_to_i = " << **ptr_to_ptr_to_i << endl;
    cout << " &ptr_to_ptr_to_i = " << &ptr_to_ptr_to_i << endl;
    
    
    cout << endl;
    cout << "initial values:" << endl;
    cout << "              i = " << i << endl;
    cout << "       ptr_to_i = " << ptr_to_i << endl;
    cout << "ptr_to_ptr_to_i = " << ptr_to_ptr_to_i << endl;
    
    foo(i);
    
    cout << endl;
    cout << "after call to foo(i):" << endl;
    cout << "              i = " << i << endl;
    cout << "       ptr_to_i = " << ptr_to_i << endl;
    cout << "ptr_to_ptr_to_i = " << ptr_to_ptr_to_i << endl;
    
    foo(ptr_to_i);
    
    cout << endl;
    cout << "after call to foo(ptr_to_i):" << endl;
    cout << "              i = " << i << endl;
    cout << "       ptr_to_i = " << ptr_to_i << endl;
    cout << "ptr_to_ptr_to_i = " << ptr_to_ptr_to_i << endl;
    
    foo(ptr_to_ptr_to_i);
    
    cout << endl;
    cout << "after call to foo(ptr_to_ptr_to_i):" << endl;
    cout << "              i = " << i << endl;
    cout << "       ptr_to_i = " << ptr_to_i << endl;
    cout << "ptr_to_ptr_to_i = " << ptr_to_ptr_to_i << endl;
}