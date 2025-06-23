#include <stdio.h>

void put_count()
{
  static int count = 0;
  printf("put_count: %d回目\n", ++count);
}

int main(void)
{
  int n;
  printf("呼び出し回数: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    put_count();
  }

  return 0;
}

