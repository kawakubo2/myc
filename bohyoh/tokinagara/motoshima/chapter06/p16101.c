#include <stdio.h>

void copy_ary(int a[], const int b[], int n)
{
  for(int i = 0; i < n; i++) {
    a[i] = b[i];
  }
}

void print_array(int a[], int n)
{
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  putchar('\n');
}


int main(void)
{
  int b[] = {1, 2, 4, 8, 16, 32, 64};
  int size = sizeof(b) / sizeof(b[0]);
  int n;
  do {
    printf("コピーする要素数: "); scanf("%d", &n);
    if (n > size) {
      printf("%dは%d以下を入力してください。\n", n, size);
    }
  } while(n > size);
  int a[n];
  copy_ary(a, b, n);

  puts("--- b ---");
  print_array(b, size);

  puts("--- a ---");
  print_array(a, n);

  return 0;
}

