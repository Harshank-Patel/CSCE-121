#include <iostream>
#include "quadratic.h"

int main() {
	double* roots;
    // not a quadratic equation
    roots = quadratic(0,1,1);
    free(roots);
	
	// no real roots
	roots = quadratic(1,1,1);
	free(roots);
    
	// 1 real root
	roots = quadratic(1,-2,1);
	free(roots);
    
	// 2 real roots
	roots = quadratic(2,5,2);
    free(roots);

	return 0;
}