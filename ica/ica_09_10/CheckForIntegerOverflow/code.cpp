#include <climits>

bool overflow(int a, int b) {
  if (a > 0 && b > 0) {
    return a > INT_MAX - b;
  } else if (a < 0 && b < 0) {
    return a < INT_MIN - b;
  }
  return false;
}