#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int linear_search(const int A[], int len, int key) {
  int cnt = 0;
  for (int i = 0; i < len; i++) {
    cnt++;
    if (A[i] == key) {
        cout << cnt << " iterations" << endl;
        return i;
    }
  }
  cout << cnt << " iterations" << endl;
  return -1;
}

int binary_search(const int A[], int len, int key) {
  int i = 0;
  int j = len;
  int cnt = 0;
  while (i < j) {
    cnt++;
    int m = (i+j)/2;
    if (key == A[m]) {
      cout << cnt << " iterations" << endl;
      return m;
    } else if(key < A[m]) {
      j = m;
    } else {
      i = m+1;
    }
  }
  cout << cnt << " iterations" << endl;
  return -1;
}

int main() {
  int key;
  cin >> key;
  int len;
  cin >> len;
  int* A = new int[len];
  for (int i = 0; i < len; i++) {
      cin >> A[i];
  }
  
  int idx;
  cout << "linear:" << endl;
  idx = linear_search(A, len, key);
  cout << idx << endl;
  
  cout << endl;
  
  cout << "binary:" << endl;
  idx = binary_search(A, len, key);
  cout << idx << endl;
}