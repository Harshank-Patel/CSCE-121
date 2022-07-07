#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
  if (n < 2 || (n > 2 && n % 2 == 0)) {
    return false;
  }
  for (int i = 3; i <= sqrt(n); i += 2) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int n = 0;
  cin >> n;
  int cnt = 0;
  while (n != 0) {
    if (isPrime(n)) {
      cnt++;
    }
    cin >> n;
  }
  cout << cnt << endl;
}