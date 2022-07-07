void remove(int A[], int& len, int i) {
  if (i < 0 || i >= len) {
    return;
  }
  for (int j = i; j < len-1; j++) {
    A[j] = A[j+1];
  }
  len--;
}