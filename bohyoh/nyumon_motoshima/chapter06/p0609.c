#include <stdio.h>

#define NUMBER 5

void rev_intary(int v[], int n)
{
  for (int i = 0; i < n / 2; i++) {
    int tmp = v[i];
    v[i] = v[n - 1 - i];
    v[n - 1 - i] = tmp;
  }
}

void print_array(const int x[], int n)
{
  for (int i = 0; i < n; i++) {
    printf("%d ", x[i]);
  }
  putchar('\n');
}

int main(void)
{
  int v[NUMBER];
  puts("配列の反転");
  for (int i = 0; i < NUMBER; i++) {
    printf("v[%d]: ", i); scanf("%d", &v[i]);
  }
  puts("---反転前---");
  print_array(v, NUMBER);
  rev_intary(v, NUMBER);
  puts("---反転後---");
  print_array(v, NUMBER);

  return 0;
}

