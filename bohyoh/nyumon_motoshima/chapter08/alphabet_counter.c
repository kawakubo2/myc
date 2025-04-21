#include <stdio.h>
#include <time.h>

int main(void)
{
  clock_t start_time, end_time;
  start_time = (double)clock();
  int ch;
  int count[128] = {0};

  while ((ch = getchar()) != EOF) {
    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
      count[ch]++;
    }
  }

  end_time = (double)clock();
  for (int i = 0; i < 128; i++) {
    if (i >= 'A' && i <= 'Z' || i >= 'a' && i <= 'z') {
      putchar((char)i);
      printf(" : %d\n", count[i]);
    }
  }

  printf("処理時間: %ldマイクロ秒\n", (end_time - start_time));
  return 0;
}

