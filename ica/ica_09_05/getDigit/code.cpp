unsigned int getDigit(int n, unsigned int i) {\
  if (n < 0) {
    n *= -1;
  }
  while (i > 0) {
    n /= 10;
    i--;
  }
  return n % 10;
}