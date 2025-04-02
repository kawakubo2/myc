#include <stdio.h>

int main(void)
{
  int n;
  printf("要素数: "); scanf("%d", &n);

  int a[n];
  for (int i = 0; i < n; i++) {
    printf("a[%d]: ", i); scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; i++) {
    printf("%3d", a[i]);
  }
  putchar('\n');

  return 0;
}

