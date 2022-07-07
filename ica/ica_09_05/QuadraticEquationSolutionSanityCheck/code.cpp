#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::abs;

// use this value for floating point equality comparison
// e.g. v1 == v2 --> abs(v1 - v2) < EPSILON
double EPSILON = 1e-9;

bool isRoot(double a, double b, double c, double r) {
  double value;
  value = a*r*r + b*r + c;
  return abs(value) < EPSILON;
}

int main() {
  double a = 0, b = 0, c = 0, r = 0;
  cin >> a >> b >> c >> r;
  cout << isRoot(a, b, c, r) << endl;
}