#include <stdio.h>

int main(void)
{
  FILE *fp;

  fp = fopen("abc", "r");

  if (fp == NULL) {
    printf("ファイル\"abc\"をオープンできませんでした。\n");
    return -1;
  } else {
    printf("ファイル\"abc\"をオープンできました。\n");
    fclose(fp);
  }

  return 0;
}

