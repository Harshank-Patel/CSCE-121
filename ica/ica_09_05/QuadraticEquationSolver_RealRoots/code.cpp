#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::sqrt;

void quadratic(double a, double b, double c) {
  double disc = b*b - 4*a*c;
  if (a == 0) {
    cout << "Not a quadratic equation." << endl;
  } else if (disc < 0) {
    cout << "No real roots." << endl;
  } else if (disc == 0) {
    // single real root
    if (b == 0) {
      cout << 0 << endl;
    } else {
      cout << -b/(2*a) << endl;
    }
  } else {
    double r1 = (-b-sqrt(disc))/(2*a);
    double r2 = (-b+sqrt(disc))/(2*a);
    cout << r1 << endl << r2 << endl;
  }
}

int main() {
  double a = 0, b = 0, c = 0;
  cin >> a >> b >> c;
  quadratic(a, b, c);
}