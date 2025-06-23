#include <stdio.h>

#define NUMBER 8

int search_idx(const int a[], int v[], int key, int n)
{
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (key == a[i]) {
      v[count++] = i;
    }
  }
  return count;
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
  int a[] = {5, 2, 7, 2, 4, 1, 7, 2};
  int idx[8];
  int k;

  print_array(a, 8);
  printf("検索値: "); scanf("%d", &k);

  int count = search_idx(a, idx, k, 8);

  if (count == 0) {
    printf("上記の配列中、%dは存在しません。\n", k);
  } else {
    printf("上記の配列中、%dは以下のように%d個存在します。\n", k, count);
    print_array(idx, count);
  }

  return 0;
}

