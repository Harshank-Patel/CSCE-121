int reverse(int n) {
  int sign = n < 0 ? -1 : 1;
  n *= sign;
  int reversed = 0;
  while (n > 0) {
    reversed *= 10;
    reversed += n % 10;
    n /= 10;
  }
  reversed *= sign;
}