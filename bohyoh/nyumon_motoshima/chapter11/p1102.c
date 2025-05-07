#include <stdio.h>

int main(void)
{
  char a[][11] = {"LISP", "C", "Ada"};
  char *p[]   = {"PAUL", "X", "Mac"};

  for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
    printf("a[%d] = \"%s\"\n", i, a[i]);
  }

  printf("sizeof(p) = %lu\n", sizeof(p));
  printf("sizeof(p[0]) = %lu\n", sizeof(p[0]));
  for (int i = 0; i < sizeof(p) / sizeof(p[0]); i++) {
    printf("p[%d] = \"%s\"\n", i, p[i]);
  }


  return 0;
}

