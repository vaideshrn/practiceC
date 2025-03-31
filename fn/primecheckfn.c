#include <stdio.h>
int is_prime(int);
void main() {
  int n;
  printf("Enter a number:\n");
  scanf("%d", &n);

  if (is_prime(n)) {
    printf("%d is a prime number\n", n);
  } else {
    printf("%d is not a prime number\n", n);
  }
}
int is_prime(int m) {
  if (m < 2) return 0;

  for (int i = 2; i * i <= m; i++) {
    if (m % i == 0)
      return 0;
  }

  return 1;
}