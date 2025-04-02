#include <stdio.h>

#define NUMBER 7
#define FAILED -1

int search_idx(const int v[], int idx[], int key, int n)
{
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] == key) {
      idx[count++] = i;
    }
  }
  return count > 0 ? count : FAILED;
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
  int key = 7;
  int v[] = {1, 7, 5, 7, 2, 4, 7};
  int idx[NUMBER];
  int c = search_idx(v, idx, key, NUMBER);
  if (c != FAILED) {
    print_array(idx, c);
  } else {
    printf("%dは配列内に存在しません。\n", key);
  }
  return 0;
}

