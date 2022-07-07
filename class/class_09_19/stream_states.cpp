#include <iostream>
#include <limits>

using std::cin;
using std::cout;
using std::endl;
using std::numeric_limits;
using std::streamsize;

int main() {
    cout << "Enter an integer: ";
    int x;
    cin >> x;
    
    while (!cin.good()) {
        // reset the flags on cin - return to "good" state
        cin.clear();
        
        // clear the stream of bad data
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        cout << "Try again: ";
        cin >> x;
    }
    
    cout << "x = " << x << endl;
    
    return 0;
}