#include <stdio.h>
#include <string.h>

int main(void)
{
  char st[128];
  char *s1 = "abcdefghijkl";
  char *s2 = "mnopqrstuvwxyz";

  printf("文字列: ");
  scanf("%s", st);

  printf("s2 = \"%s\"\n", strcpy(s2, st));
  printf("s1 = \"%s\"\n", strcpy(s1, s2));

  return 0;
}

