#include <iostream>

using std::cout;
using std::endl;

int main() {

int A[20];
cout << "address of first element: " << A << endl;
cout << "address of A: " << &A << endl;
cout << "value in A: " << A << endl;
cout << "address of 5th element: " << &A[4] << endl;
cout << "address of 5th element: " << A + 4 << endl;
cout << "value of 5th element: " << A[4] << endl;

}
