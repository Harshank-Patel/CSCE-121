#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

string reverse(string s) {
    // note that argument is passed by value (copy of string)
    string r;
    while (!s.empty()) {
        r.push_back(s.back());
        s.pop_back();
    }
    return r;
}

int main() {
    string s;
    cin >> s;

    string r = reverse(s);

    cout << s << "^R = " << r << endl;

    return 0;
}
