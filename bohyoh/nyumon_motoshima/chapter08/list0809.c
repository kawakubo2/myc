#include <stdio.h>

int main(void)
{
  int ch;
  int cnt[10] = {0};

  while ((ch = getchar()) != EOF) {
    if (ch >= '0' && ch <= '9') {
      cnt[ch - '0']++;
    }
  }

  puts("数字文字の出現回数");
  for (int i = 0; i < 10; i++) {
    printf("'%d' : %d\n", i, cnt[i]);
  }
  getchar();
  return 0;
}

