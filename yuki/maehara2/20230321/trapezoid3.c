#include <stdio.h>

int main(void)
{
    double upperbase, lowerbase, height;
    FILE *fp;
    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("ファイルのオープンに失敗しました。");
        return -1;
    }
    fscanf(fp, "%lf%lf%lf", &upperbase, &lowerbase, &height);
    printf("台形の面積は%.1fです。\n",
        (upperbase + lowerbase) * height / 2);

    fclose(fp);
    return 0;
}