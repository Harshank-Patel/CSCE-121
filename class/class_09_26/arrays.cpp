#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::ostream;
using std::ofstream;

void print_array(int* A, int len, ostream& out) {
    for (int i = 0; i < len; i++) {
        out << A[i] << " ";
    }
    out << endl;
}

void print_2d_array(int A[][3], int rows, int cols, ostream& out) {
    for (int i = 0; i < rows; i++) {
        print_array(A[i], cols, out);
    }
}

int main() {

    int capacity = 10;
    // this is OK.
    int A[capacity];

    // this is NOT OK
    //cin >> capacity;
    //int A[capacity];

    A[0] = 1;
    A[2] = 2;
    int len = 3;

    ofstream fout("output.txt");
    print_array(A, len, fout);

    int B[2][3];
    int rows = 2;
    int cols = 3;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            B[i][j] = cols*i + j;
        }
    }
    print_2d_array(B, rows, cols, cout);

    return 0;
}
