#include <stdio.h>

int fatorial(int num) {
  if (num == 0 || num == 1) {
    return 1;
  }
  if (num > 1) {
    return num * fatorial(num - 1);
  }
}

int main(void) {
  printf("%d\n", fatorial(1));
  return 0;
}