#include <stdio.h>

int main(void)
{
  int a[] = {3, 5, 2, 7, 8, 4, 1, 9, 1, 0, 3, 4, 5};
  int size = sizeof(a) / sizeof(a[0]);

  int max = 0; // 要素はすべて正の整数なので0でもよい

  for (int i = 0; i < size; i++) {
    if (a[i] > max) max = a[i];
  }

  for (int i = 0; i < size; i++) {
    printf("%d", i % 10);
  }
  putchar('\n');

  for (int i = 1; i <= max; i++) {
    for (int j = 0; j < size; j++) {
      if (a[j] >= i) {
        putchar('*');
      } else {
        putchar(' '); 
      }
    }
    putchar('\n');
  }

  return 0;
}

