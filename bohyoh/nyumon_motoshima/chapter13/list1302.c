#include <stdio.h>

int main(void)
{
  FILE *fp;

  fp = fopen("hw.txt", "r");

  if (fp == NULL) {
    printf("ファイル\"abc\"をオープンできませんでした。\n");
    return -1;
  } else {
    int    ninzu;
    char   name[100];
    double height, weight;
    double hsum = 0.0;
    double wsum = 0.0;

    while (fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3) {
      printf("%-10s %5.1f %5.1f\n", name, height, weight);
      ninzu++;
      hsum += height;
      wsum += weight;
    }
    printf("----------------------\n");
    printf("平均       %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
    fclose(fp);
  }

  return 0;
}

