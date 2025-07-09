#include <stdio.h>

int main(void)
{
  int c;
  int count = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') count++;
  }

  printf("行数は%d\n", count);

  return 0;
}