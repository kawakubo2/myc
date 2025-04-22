#include <stdio.h>

int main(void)
{
  char s[] = "ABC";
  printf("%s\n", s);

  s[0] = '\0';
  printf("%s\n", s);

  return 0;
}

