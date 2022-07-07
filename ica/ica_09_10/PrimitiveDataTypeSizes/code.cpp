#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

int main() {
  cout << "size of bool       : " << 
    setw(2) << sizeof(bool) << " bytes" << endl;
  cout << "size of char       : " << 
    setw(2) << sizeof(char) << " bytes" << endl;
  cout << "size of short      : " << 
    setw(2) << sizeof(short) << " bytes" << endl;
  cout << "size of int        : " << 
    setw(2) << sizeof(int) << " bytes" << endl;
  cout << "size of long       : " << 
    setw(2) << sizeof(long) << " bytes" << endl;
  cout << "size of float      : " << 
    setw(2) << sizeof(float) << " bytes" << endl;
  cout << "size of double     : " << 
    setw(2) << sizeof(double) << " bytes" << endl;
  cout << "size of long double: " << 
    setw(2) << sizeof(long double) << " bytes" << endl;
  
  return 0;
}