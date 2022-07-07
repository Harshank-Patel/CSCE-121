#include <iostream>

using namespace std;

int hailstone_path_length(int n) {
  int len = 1;
  while (n > 1) {
    ++len;
    if (n % 2 == 0) {
      n /= 2;
    } else {
      n = 3*n + 1;
    }
  }
  return len;
}

int main() {
  int n = 0;
  cin >> n;
  int len = hailstone_path_length(n);
  cout << len << endl;
  return 0;
}