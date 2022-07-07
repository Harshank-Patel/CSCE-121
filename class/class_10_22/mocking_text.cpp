#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

void make_mocking(string& s) {
    // note that the argument is passed by reference
    for (string::iterator iter = s.begin(); iter != s.end(); iter++) {
        if (rand() % 2) {
            *iter = tolower(*iter);
        } else {
            *iter = toupper(*iter);
        }
    }
}

int main() {
    srand(time(NULL));

    string s;
    getline(cin, s);

    make_mocking(s);

    cout << s << endl;

    return 0;
}
