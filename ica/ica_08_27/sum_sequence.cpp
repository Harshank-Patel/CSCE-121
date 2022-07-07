#include <iostream>

using namespace std;

int main() {
    
    cout << "enter a 0-terminated, newline-delimited list of integers:" << endl;
    
    int n = 0;
    cin >> n;
    
    int sum = 0;
    while (n != 0) {
        sum += n;
        cin >> n;
    }
    cout << "sum = " << sum << endl;

	return 0;
}