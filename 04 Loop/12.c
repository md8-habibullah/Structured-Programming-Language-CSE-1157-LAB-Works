#include <stdio.h>

int main() {
  int n, first = 0, second = 1, next, i;

  scanf("%d", &n);

  printf("Fibonacci Series:\n");

  for (i = 0; i < n; ++i) {
    printf("%d, ", first);
    next = first + second;
    first = second;
    second = next;
  }

  return 0;
}