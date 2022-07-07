#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void upper(char* str) {
    if (!str) {
        cout << "str is nullptr" << endl;
        return;
    }
    int i = 0;
    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
        i++;
    }
}

int main(int argc, char* argv[]) {
    
    char* str = argv[1];
    char* str2 = nullptr;
    
    cout << str << endl;
    upper(str);
    cout << str << endl;

    // this puts cout into bad state
    cout << str2 << endl;
    cout.clear();
    // without clear, all couts ignored (makes it look like function not called)
    upper(str2);
    cout << str2 << endl;
    
    return 0;
}
