#include <stdio.h>

void put_stars(int n)
{
  while (n-- > 0) {
    putchar('*');
  }
}

int main(void)
{
  int len;
  printf("左下直角二等辺三角形。\n");
  printf("短辺: "); scanf("%d", &len);

  for (int i = 1; i <= len; i++) {
    put_stars(i);
    putchar('\n');
  }

  return 0;
}

