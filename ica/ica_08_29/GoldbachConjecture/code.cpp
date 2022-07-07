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

int goldbach(int n) {
    if (n % 2 == 1 || n <= 2) {
        return -1;
    }
    if (isPrime(n-2)) {
        return 2;
    }
    int p = 3;
    while (p <= n/2) {
        if (isPrime(p) && isPrime(n-p)) {
            return p;
        }
        p += 2;
    }
    return 0;
}

int main() {
    int n = 0;
    cin >> n;
    int p = goldbach(n);
    if (p == -1) {
        cout << "invalid" << endl;
    } else if (p == 0) {
        cout << "Goldbach is FALSE" << endl << "Counterexample: " << n << endl;
    } 
    else {
        cout << n << " = " << p << " + " << n-p << endl;
    }
    
    return 0;
}