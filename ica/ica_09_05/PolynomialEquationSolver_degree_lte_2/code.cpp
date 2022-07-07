#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::sqrt;

void quadratic(double a, double b, double c) {
  if (a == 0) {
    if (b == 0) {
      // constant
      if (c == 0) {
        cout << "All x." << endl;
      } else {
        cout << "No roots." << endl;
      }
    } else {
      // linear
      cout << -c/b << endl;
    }
  } else {
    double disc = b*b - 4*a*c;
    if (disc < 0) {
      // 2 imaginary roots
      double i = sqrt(-disc)/(2*a);
      double r = -b/(2*a);
      if (i < 0) {
        cout << r << " + " << -i << "i" << endl;
        cout << r << " - " << -i << "i" << endl;
      } else {
        cout << r << " - " << i << "i" << endl;
        cout << r << " + " << i << "i" << endl;
      }
    } else if (disc == 0) {
      // single real root
      if (b == 0) {
        cout << 0 << endl;
      } else {
        cout << -b/(2*a) << endl;
      }
    } else {
      // 2 real roots
      double r = -b/(2*a);
      double i = sqrt(disc)/(2*a);
      cout << "x = " << r-i << ", " << r+i << endl;
    }
  }
}

int main() {
  double a = 0, b = 0, c = 0;
  cin >> a >> b >> c;
  quadratic(a, b, c);
}