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
  if (isPrime(n)) {
    cout << "prime" << endl;
  } else {
    cout << "not prime" << endl;
  }
}