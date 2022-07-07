#include <iostream>
#include <climits>

using std::cin;
using std::cout;
using std::endl;

bool overflow(int a, int b) {
    /*
    if (a > 0 && b > 0)
        return a+b <= 0;
    else if (a < 0 && b < 0)
        return a+b >= 0;
    return false;
    */
    
    if (a > 0 && b > 0)
        return a >= INT_MAX - b;
    else if (a < 0 && b < 0)
        return a+b >= 0;
    return false;
}

int main() {
    int a,b;
    cin >> a >> b;
    cout << overflow(a, b) << endl;
}