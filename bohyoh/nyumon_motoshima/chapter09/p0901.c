#include <stdio.h>

int main(void)
{
  char str[] = "ABC\0DEF";
  printf("%s\n", str);

  return 0;
}

