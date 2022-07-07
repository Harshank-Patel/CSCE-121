#include <iostream>

using namespace std;

int main() {
  int n = 0;
  cin >> n;
  int cnt = 0;
  while (n != 0) {
    if (n % 2 == 0) {
      cnt++;
    }
    cin >> n;
  }
  cout << cnt << endl;
  
  return 0;
}