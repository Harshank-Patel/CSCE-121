#ifndef QUADRATIC_H
#define QUADRATIC_H

#include <cmath>

double* quadratic(double a, double b, double c) {
    if (a == 0) {
        return nullptr;
    }
    double det = b*b-4*a*c;
    if (det < 0) {
        return nullptr;
    }
    double x1 = 0, x2 = 0;
    if (det == 0) {
        x1 = (-b + sqrt(det))/(2*a);
        x2 = x1;
    } else {
        x1 = (-b - sqrt(det))/(2*a);
        x2 = (-b + sqrt(det))/(2*a);
    }
    return new double[2]{x1, x2};
}

#endif