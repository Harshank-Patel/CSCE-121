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

void print_2d_array(int** A, int rows, int cols, ostream& out) {
    for (int i = 0; i < rows; i++) {
        print_array(A[i], cols, out);
    }
}

int main() {
    // allocate 2d array on heap
    int** A = new int*[3];
    for (int i = 0; i < 3; i++) {
        A[i] = new int[4];
        for (int j = 0; j < 4; j++) {
            A[i][j] = 4*i+j;
        }
    }
    
    print_2d_array(A, 3, 4, cout);
    
    for (int i = 0; i < 3; i++) {
        delete[] A[i];
        A[i] = nullptr;
    }
    delete[] A;
    // better to crash than allow use after free
    A = nullptr;
}