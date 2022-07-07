#include <iostream>

using namespace std;

int main() {
    
    // read n from the user
    int n = 0;
    cout << "n = ";
    cin >> n;
    
    // sum from 1 to n
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    cout << "sum = " << sum << endl;
    
    return 0;
}