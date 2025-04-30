#include <stdio.h>

void set999(int *p) 
{
  *p = 999;
}

int main(void)
{
  int x = 123;
  int y = 456;
  int sw;

  printf("x = %d\n", x);
  printf("y = %d\n", y);

  printf("変更するのは [0…x / 1…y] : ");
  scanf("%d", &sw);

  int *p;
  if (sw == 0) {
    p = &x;
  } else {
    p = &y;
  }

  set999(p);

  printf("x = %d\n", x);
  printf("y = %d\n", y);

  return 0;
}

