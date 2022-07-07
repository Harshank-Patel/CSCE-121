#include "fractions.h"

void fraction_reduce(Fraction& f) {
    int g = gcd(f.top, f.bottom);
    f.top /= g;
    f.bottom /= g;
    if (f.top == 0) {
        f.bottom = 1;
    } else if (f.bottom < 0) {
        f.top *= -1;
        f.bottom *= -1;
    }
}

Fraction fraction_add(Fraction f1, Fraction f2) {
    int top = f1.top * f2.bottom + f2.top * f1.bottom;
    int bottom = f1.bottom * f2.bottom;
    Fraction result = {top, bottom};
    fraction_reduce(result);
    return result;
}

Fraction fraction_subtract(Fraction f1, Fraction f2) {
    f2.top *= -1;
    return fraction_add(f1, f2);
}

Fraction fraction_multiply(Fraction f1, Fraction f2) {
    int top = f1.top * f2.top;
    int bottom = f1.bottom * f2.bottom;
    Fraction result = {top, bottom};
    fraction_reduce(result);
    return result;
}

Fraction fraction_divide(Fraction f1, Fraction f2) {
    int top = f1.top * f2.bottom;
    int bottom = f1.bottom * f2.top;
    Fraction result = {top, bottom};
    fraction_reduce(result);
    return result;
}