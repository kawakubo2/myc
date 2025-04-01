#include <stdio.h>

#define NUMBER 7

int search_idx(const int v[], int idx[], int key, int n)
{
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] == key) {
      idx[count++] = i;
    }
  }
  return count;
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
  int v[] = {1, 7, 5, 7, 2, 4, 7};
  int idx[NUMBER];
  int c = search_idx(v, idx, 7, NUMBER);
  for (int i = 0; i < c; i++) {
    printf("%d ", idx[i]);
  }
  return 0;
}

