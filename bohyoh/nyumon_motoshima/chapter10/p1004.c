#include <stdio.h>

void set_idx(int *v, int n)
{
  for (int i = 0; i < n; i++) {
    v[i] = i;
    // *(v + i) = i;
  }
}

int main(void)
{
  int a[] = {1, 2, 4, 8, 16};
  set_idx(a, 5);

  for (int i = 0; i < 5; i++) {
    printf("a[%d] = %d\n", i, a[i]);
  }


  return 0;
}

