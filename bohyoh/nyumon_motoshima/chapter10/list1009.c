#include <stdio.h>

int main(void)
{
  int a[5] = {1, 2, 3, 4, 5};
  int *p = a;

  for (int i = 0; i < 5; i++) {
    printf("&a[%d] = %p  p + %d = %p\n", i, &a[i], i, p + i);
  }

  puts("--- ポインタ操作 ---");
  for (int i = 0; i < 5; i++) {
    printf("a[%d] = %d\n", i, *(p + i));
  }

  /*
  糖衣構文(Syntax Sugar)
  a[0] ---> *(&a[0]) ---> *(p + 0)
  */
  puts("--- インデックス操作 ---");
  for (int i = 0; i < 5; i++) {
    printf("a[%d] = %d\n", i, a[i]);
  }

  return 0;
}

