int max(int a, int b) {
  if (a > b)
    return a;
  return b;
}

int max(int a, int b, int c) {
  return max(a, max(b,c));
}

int max(int a, int b, int c, int d) {
  return max(max(a,b), max(c,d));
}

int max(int A[], int len) {
  int m = A[0];
  for (int i = 1; i < len; i++) {
    m = max(m, A[i]);
  }
  return m;
}