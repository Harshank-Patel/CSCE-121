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

int find(int A[], int len, int element) {
    for (int i = 0; i < len; i++) {
        if (A[i] == element)
            return i;
    }
    return -1;
}

// removes first instance of element from A
void remove(int A[], int& len, int element) {
    int i = find(A, len, element);
    if (i == -1)
        return;
    for (; i < len-1; i++) {
        A[i] = A[i+1];
    }
    len--;
}

int main() {
    int A[] = {8,6,7,5,3,0,9,0,0,0};
    int len = 7;
    print_array(A, len, cout);
    remove(A, len, 3);
    print_array(A, len, cout);
    

}