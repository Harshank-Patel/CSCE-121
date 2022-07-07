int linear_search(const int* A, const unsigned int len, const int k) {
  for (unsigned int i = 0; i < len; i++) {
    if (A[i] == k) {
      // found at index i
      return i;
    }
  }
  return -1; // not found
}