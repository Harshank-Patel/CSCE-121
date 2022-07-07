#include <iostream>
#include <iomanip>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::setw;


string str_mult(string str, unsigned int n) {
    string str2 = "";
    while (n > 0) {
        str2 += str;
        --n;
    }
    return str2;
}

// a stack frame for foo
typedef struct StackFrame {
    int a;
    int b;
    void* ret;
    void* ebp;
    char buf[16];
} StackFrame;

void print(StackFrame frame) {
    cout << setw(16) << "foo" << " " << str_mult("-", 17) << "+" << str_mult("-", 19) << endl;
    cout << setw(33) << "a: int" << " | " << setw(18) << frame.a << endl;
    cout << setw(33) << "b: int" << " | " << setw(18) << frame.b << endl;
    cout << setw(33) << "return address" << " | " << setw(18) << frame.ret << endl; 
    cout << setw(33) << "saved frame ptr" << " | " << setw(18) << frame.ebp << endl;
    cout << setw(33) << "buf: char[16]" << " | " << setw(18) << frame.buf << endl;
}

int foo(int a, int b) {
    char buf[16] = "AAAAAAAAAAAAAAA";
    
    // this reconstructs the frame and prints it
    void* ret = __builtin_return_address(0);
    void* ebp = __builtin_frame_address(1);
    StackFrame frame = {a, b, ret, ebp, "AAAAAAAAAAAAAAA"};
    print(frame);
    
    return 1;
}

int main() {
    int x = 867;
    int y = 5309;
    
    // print stack frame
    cout << setw(16) << "main" << " " << str_mult("-", 17) << "+" << str_mult("-", 19) << endl;
    cout << setw(33) << "return address" << " | " << setw(18) << __builtin_return_address(0) << endl; 
    cout << setw(33) << "saved frame ptr" << " | " << setw(18) <<  __builtin_frame_address(1) << endl;
    cout << setw(33) << "x: int" << " | " << setw(18) << x << endl;
    cout << setw(33) << "y: int" << " | " << setw(18) << y << endl;
        
    foo(x, y);
    
    return 0;
}