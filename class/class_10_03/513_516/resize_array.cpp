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

int* grow_array(int* A, int& capacity) {
    // allocate bigger array
    int* B = new int[2*capacity];
    
    // deep copy into B
    for (int i = 0; i < capacity; i++) {
        B[i] = A[i];
    }
    
    // update capacity
    capacity *= 2;
    
    // deallocate A
    delete[] A;
    
    return B;
}

int main() {
    int* A = new int[1];
    int len = 0;
    int capacity = 1;
    
    // ...
    
    for (int i = 0; i < 100; i++) {
        if (i >= capacity) {
            A = grow_array(A, capacity);
        }
        A[i] = i;
        len++;
        //print_array(A, len, cout);
        cout << len << " / " << capacity << endl;
    }
    
    delete[] A;
}