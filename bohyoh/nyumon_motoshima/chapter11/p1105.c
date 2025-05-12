#include <stdio.h>
#include <string.h>

char *mystrcat(char *dest, const char *src)
{
  char *result = dest;
  while(*dest) {
    dest++;
  }
  while(*dest++ = *src++);
  return result;
}

char *mystrncat(char *dest, const char *src, int n)
{
  char *result = dest;
  while(*dest) {
    dest++;
  }
  while(*dest = *src) {
    n--;
    dest++;
    src++;
    if (n == 0) {
      *dest = '\0';
      break;
    }
  }

  return result;
}

int main(void)
{
  char st[128];
  printf("文字列: ");
  scanf("%s", st);
  // strcat
  char s1[128] = "ABCDE";
  // strncat
  char s2[128] = "XYZ";
  char x[128];

  strcpy(x, st); 
  printf("s1 = \"%s\"\n", mystrcat(s1, x));
  strcpy(x, st); 
  printf("s2 = \"%s\"\n", mystrncat(s2, x, 5));

  return 0;
}

