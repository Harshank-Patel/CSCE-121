#ifndef FRACTIONS_H
#define FRACTIONS_H

typedef struct Fraction {
    int top;
    int bottom;
} Fraction;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void fraction_reduce(Fraction& f);

Fraction fraction_add(Fraction f1, Fraction f2);

Fraction fraction_subtract(Fraction f1, Fraction f2);

Fraction fraction_multiply(Fraction f1, Fraction f2);

Fraction fraction_divide(Fraction f1, Fraction f2);

#endif