#include "code.h"

bool myLT(const int a, const int b) {
  if (a % 2 == 0) {
    if (b % 2 == 0) {
      return a < b;
    }
    return true;
  }
  if (b % 2 == 0) {
    return false;
  }
  return a > b;
}