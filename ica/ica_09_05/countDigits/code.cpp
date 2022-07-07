unsigned int countDigits(int n) {
  unsigned int digit_cnt = 0;
  if (n < 0) {
    n *= -1;
  }
  while (n > 0) {
    digit_cnt++;
    n /= 10;
  }
  return digit_cnt;
}