#include <stdio.h>

int fibonacci(int n) {
  if (n == 1) {
    return 1;
  }
  if (n == 2) {
    return 1;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
  printf("%d\n", fibonacci(6));
  return 0;
}