#include <stdio.h>
#include <stddef.h>

int main(void)
{
  for (int i = 0; i <= 127; i++) {
    putchar((char)i);
    printf(" の文字コードは %d \n", i);
  }

  long long int n = 1;
  printf("long long int: %zu\n", sizeof(n));
  printf("long long int: %zu\n", sizeof(long long int));
  int m = 1;
  printf("int: %zu\n", sizeof(m));

  return 0;
}