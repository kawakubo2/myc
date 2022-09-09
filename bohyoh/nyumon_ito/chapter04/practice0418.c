#include <stdio.h>

int main(void)
{
  int i, n;
  printf("個数: "); fscanf(stdin, "%d", &n);

  for (i = 1; i <= n; i++) {
    putchar('*');
    if (i % 5 == 0) {
      putchar('\n');
    }
  }
  if (n % 5 != 0) putchar('\n');

  return 0;
}
