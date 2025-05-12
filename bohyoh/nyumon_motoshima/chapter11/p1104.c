#include <stdio.h>

char *mystrcpy(char *dest, const char *src)
{
  char *result = dest;
  while(*dest++ = *src++);
  return result;
}

char *mystrncpy(char *dest, const char *src, int n)
{
  char *result = dest;
  while(*dest++ = *src++) {
    n--;
    if (n == 0) break;
  }
  return result;
}

int main(void)
{
  char st[128];
  char s1[128] = "zzzzzzzzzzz";
  char s2[128] = "wwwwwwwwwww";

  printf("文字列: "); scanf("%s", st);

  printf("s1 = \"%s\"\n", mystrcpy(s1, st));
  printf("s2 = \"%s\"\n", mystrncpy(s2, st, 5));


  return 0;
}

