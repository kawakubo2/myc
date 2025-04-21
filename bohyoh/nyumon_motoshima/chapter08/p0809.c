#include <stdio.h>

int main(void)
{
  int ch;
  int count = 0;

  while((ch = getchar()) != EOF) {
    if (ch == '\n') count++;
  }
  printf("改行コードは%d個あります。\n", count);

  return 0;
}

