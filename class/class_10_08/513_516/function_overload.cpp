#include <iostream>

using std::cout;
using std::endl;

int max(const int a, const int b) {
    cout << "max<int>" << endl;
    if (a > b)
        return a;
    return b;
}

double max(const double a, const double b) {
    cout << "max<double>" << endl;
    if (a > b)
        return a;
    return b;
}

double max(const int a, const double b) {
    cout << "max<int,double>" << endl;
    if (a > b)
        return a;
    return b;
}

const char* max(const char a[], const char b[]) {
    cout << "max<char[]>" << endl;
    // which one's longer?
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

int max(int a, int b, int c) {
    cout << "max<intx3>" << endl;
    if (a > b) {
        if (a > c)
            return a;
        return c;
    }
    if (b > c)
        return b;
    return c;
}

int main() {
    cout << "max(3,5) = " << max(3,5) << endl;
    cout << "max(5,3) = " << max(5,3) << endl;
    cout << "max(3,3) = " << max(3,3) << endl;
    cout << "max(-3,-5) = " << max(-3,-5) << endl;
    cout << "max(-5,-3) = " << max(-5,-3) << endl;
    cout << "max(3.14,5.6) = " << max(3.14,5.6) << endl;
    cout << "max(3,5.6) = " << max(3,5.6) << endl;
    cout << "max(\"3.1415\",\"5.6\") = " << max("3.1415","5.6") << endl;
    cout << "max(1,2,3) = " << max(1,2,3) << endl;
    cout << "max(1,3,2) = " << max(1,3,2) << endl;
    cout << "max(2,1,3) = " << max(2,1,3) << endl;
    cout << "max(2,3,1) = " << max(2,3,1) << endl;
    cout << "max(3,1,2) = " << max(3,1,2) << endl;
    cout << "max(3,2,1) = " << max(3,2,1) << endl;
}