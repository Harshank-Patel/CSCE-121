#include "mysort.h"

void mySort(int A[], const int len, std::function<bool(int,int)> LT) {
  // selection sort
  for (int i = 0; i < len-1; i++) {
    int t = i;
    // find the minimum value in the unsorted portion
    for (int j = i+1; j < len; j++) {
      if (LT(A[j], A[t])) {
        t = j;
      }
    }
    if (t > i) {
      // swap into correct place
      int tmp = A[i];
      A[i] = A[t];
      A[t] = tmp;
    }
  }
}