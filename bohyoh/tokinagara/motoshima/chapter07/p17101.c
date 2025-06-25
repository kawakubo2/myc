#include <stdio.h>

int main(void)
{
  int a, b, c;
  printf("整数a: "); scanf("%d", &a);
  printf("整数b: "); scanf("%d", &b);

  c = a + (~b + 1); // ~b + 1 --- 2の補数
  printf("%d - %d = %d\n", a, b, c);

  return 0;
}

