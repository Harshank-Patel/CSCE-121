#include <iostream>

using std::cout;
using std::endl;

int max(const int a, const int b) {
    if (a > b)
        return a;
    return b;
}

double max(const double a, const double b) {
    if (a > b)
        return a;
    return b;
}

double max(const int a, const double b) {
    if (a > b)
        return a;
    return b;
}

double max(const double a, const int b) {
    if (a > b)
        return a;
    return b;
}

const char* max(const char a[], const char b[]) {
    // which one is longest?
    int a_len = 0;
    const char* p = a;
    while (*p) {
        a_len++;
        p++;
    }
    int b_len = 0;
    p = b;
    while (*p) {
        b_len++;
        p++;
    }
    if (a_len > b_len)
        return a;
    return b;
}

int max(const int a, const int b, const int c) {
    if (a > b) {
        if (a > c)
            return a;
        return c;
    }
    if (c > b)
        return c;
    return b;
}

int main() {
    
    cout << "max(3,5) = " << max(3,5) << endl;
    cout << "max(5,3) = " << max(5,3) << endl;
    cout << "max(3,3) = " << max(3,3) << endl;
    cout << "max(-3,-5) = " << max(-3,-5) << endl;
    cout << "max(-5,-3) = " << max(-5,-3) << endl;

    cout << "max(3.14,5.6) = " << max(3.14,5.6) << endl;
    
    cout << "max(3,5.6) = " << max(3,5.6) << endl;
    
    cout << "max(3.14,5) = " << max(3.14,5) << endl;
    
    cout << "max(\"3.14\",\"5\") = " << max("3.14","5") << endl;
    
    cout << "max(1,2,3) = " << max(1,2,3) << endl;
    cout << "max(1,3,2) = " << max(1,3,2) << endl;
    cout << "max(2,1,3) = " << max(2,1,3) << endl;
    cout << "max(2,3,1) = " << max(2,3,1) << endl;
    cout << "max(3,1,2) = " << max(3,1,2) << endl;
    cout << "max(3,2,1) = " << max(3,2,1) << endl;
}