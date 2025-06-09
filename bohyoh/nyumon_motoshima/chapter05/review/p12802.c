#include <stdio.h>

void print_char(int n, char c)
{
  for (int i = 0; i < n; i++) {
    putchar(c);
  }
}

void bar_chart(int a[], int n)
{
  for (int i = 0; i < n; i++) {
    printf("a[%d]: ", i);
    print_char(a[i], '#');
    putchar('\n');
  }
}
int main(void)
{
  int a[] = {3, 5, 2, 7, 6};

  int n = sizeof(a) / sizeof(a[0]);

  bar_chart(a, n);

  return 0;
}

