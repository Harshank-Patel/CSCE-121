#include <iostream>

using std::cout;
using std::endl;

// must tell function about dimensions
// because the compiler has to allocate the memory
// on the stack and it must know how to do the
// pointer arithmetic for indexing.
void print_2d_array(int A[][4], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[][4] = {
        {1,2,3,4},
        {2,3,4,5},
        {4,5,6,7}
    };
    
    int rows = 3;
    int cols = 4;
    int B[3][4];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            B[i][j] = A[i][j] + 1;
        }
    }
    
    print_2d_array(B, rows, cols);
    
    return 0;
}
