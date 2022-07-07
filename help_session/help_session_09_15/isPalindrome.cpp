#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int reverse(int n) {
    int sign = 1;
    if (n < 0) {
        n *= -1;
        sign = -1;
    }
    int r = 0;
    // assume n >= 0
    while (n > 0) {
        int d = n % 10;
        r *= 10;
        r += d;
        n /= 10;
    }
    return r*sign;
}

bool isPalindrome(int n) {
    return n == reverse(n);
}

int main() {
    int n;
    cin >> n;
    cout << n << "^R = " << reverse(n) << endl;
    cout << "isPalindrome: " << isPalindrome(n) << endl;
    return 0;
}