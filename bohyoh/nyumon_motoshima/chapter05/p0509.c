#include <stdio.h>

#define NUMBER 5

int main(void)
{
  int a[NUMBER];
  int b[NUMBER];

  for(int i = 0; i < NUMBER; i++) {
    printf("a[%d] :", i); scanf("%d", &a[i]);
  }

  for (int i = 0; i < NUMBER; i++) {
    b[(NUMBER - 1) - i] = a[i];
  }

  puts("   a   b");
  puts("--------");
  for (int i = 0; i < NUMBER; i++) {
    printf("%4d%4d\n", a[i], b[i]);
  }

  return 0;
}

