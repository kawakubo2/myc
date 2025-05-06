#include <stdio.h>

#define NUMBER 5

void bubble_sort(int v[], int n)
{
  for (int i = 0; i < n - 1; i++) {
    for (int j = n - 1; j > i; j--) {
      if (v[j - 1] > v[j]) {
        int tmp = v[j];
        v[j] = v[j - 1];
        v[j - 1] = tmp;
      }
    }
  }
}

void print_array(int v[], int n)
{
  for (int i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
  putchar('\n');
}


int main(void)
{
  int heights[] = { 179, 163, 175, 178, 173};

  puts("--- ソート前 ---");
  print_array(heights, NUMBER);
  bubble_sort(heights, NUMBER);
  puts("--- ソート後 ---");
  print_array(heights, NUMBER);
  return 0;
}

