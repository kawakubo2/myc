#include <stdio.h>

#define NUMBER 5

void intary_rcpy(int v1[], const int v2[], int n)
{
  for (int i = 0; i < n; i++) {
    v1[n - 1 - i] = v2[i];
  }
}

void print_array(const int v[], int n)
{
  printf("{ %d", v[0]);
  for (int i = 1; i < n; i++) {
    printf(", %d", v[i]);
  }
  printf(" }\n");
}

int main(void)
{
  int v1[NUMBER];
  int v2[NUMBER];

  puts("intの配列v2に値を格納し、反転した値をv2にコピーします。");

  for (int i = 0; i < NUMBER; i++) {
    printf("v2[%d]: ", i); scanf("%d", &v2[i]);
  }

  puts("--- 配列v2 ---");
  print_array(v2, NUMBER);
  intary_rcpy(v1, v2, NUMBER);
  puts("--- 配列v1 ---");
  print_array(v1, NUMBER);

  return 0;
}

