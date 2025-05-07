#include <stdio.h>

int main(void)
{
  char a[][11] = {"LISP", "C", "Ada", "JavaScript"};
  char *p[]   = {"PAUL", "X", "Mac", "JavaScript"};

  for (int i = 0; i < 4; i++) {
    printf("a[%d] = \"%s\"\n", i, a[i]);
  }

  /* 左辺値に配列は指定できない */
  // a[1] = "C++";
  // for (int i = 0; i < 4; i++) {
  //   printf("a[%d] = \"%s\"\n", i, a[i]);
  // }

  for (int i = 0; i < 4; i++) {
    printf("p[%d] = \"%s\"\n", i, p[i]);
  }
  p[1] = "Japan";
  for (int i = 0; i < 4; i++) {
    printf("p[%d] = \"%s\"\n", i, p[i]);
  }


  return 0;
}

