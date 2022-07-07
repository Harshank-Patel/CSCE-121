#include <iostream>
#include "mysort.h"
#include "code.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    // read array from stdin
	int len;
	cin >> len;
	int* A = new int[len];
	for (int i = 0; i < len; i++) {
		cin >> A[i]; 
	}
    
	mySort(A, len, myLT);
    
    // print array to stdout
	for (int i = 0; i < len; i++) {
		cout << A[i] << endl;
	}
}