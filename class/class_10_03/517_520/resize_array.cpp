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

int* grow(int* A, int& capacity) {
    // allocate more space
    int* B = new int[2*capacity];
    
    // copy values
    for (int i = 0; i < capacity; i++) {
        B[i] = A[i];
    }
    
    // update capacity
    capacity *= 2;
    
    // deallocate old array
    delete[] A;
    
    return B;
}

void append(int*& A, int& len, int& capacity, int element) {
    if (len == capacity) {
        A=grow(A,capacity);
    }
    A[len++] = element;
}

int main() {
    int capacity = 1;
    int* stuff = new int(200);
    int* A = new int[capacity];
    int* stuff2 = new int(200);
    int len = 0;
    
    for (int i = 0; i < 100; i++) {
        append(A,len,capacity,i);
        cout << len << " / " << capacity << "("<<*stuff<<","<<*stuff2<<")" << endl;
        print_array(A,len,cout);
        
    }
    
    delete stuff;
    delete stuff2;
    delete[] A;
}