#include <stdio.h>

#define NUMBER 5
#define FAILED -1

int search(int v[], int key, int n)
{
  int i = 0;
  v[n] = key;
  while(1) {
    if (v[i] == key) {
      break;
    }
    i++;
  }
  return i < n ? i : FAILED;
}


int main(void)
{
  int ky, idx;
  int x[NUMBER + 1];
  for (int i = 0; i < NUMBER; i++) {
    printf("x[%d]: ", i); scanf("%d", &x[i]);
  }
  printf("探す値: "); scanf("%d", &ky);

  if ((idx = search(x, ky, NUMBER)) == FAILED) {
    puts("探索に失敗しました。");
  } else {
    printf("%dは%d番目にあります。\n", ky, idx + 1);
  }

  return 0;
}

