#include <stdio.h>

void array_set(int v[], int n, int val)
{
  for (int i = 0; i < n; i++) {
    v[i] = val;
  }
}

int main(void)
{
  int a[] = {1, 2, 3, 4, 5};

  array_set(&a[2], 2, 999);
  for (int i = 0; i < 5; i++) {
    printf("a[%d] = %d\n", i, a[i]);
  }

  return 0;
}

