#include <stdio.h>

int main(void)
{
    double upperbase, lowerbase, height;
    puts("台形の面積を求めます。");
    printf("上底: "); fscanf(stdin, "%lf", &upperbase);
    printf("下底: "); fscanf(stdin, "%lf", &lowerbase);
    printf("高さ: "); fscanf(stdin, "%lf", &height);

    printf("台形の面積は%.1fです。\n",
        (upperbase + lowerbase) * height / 2);

    return 0;
}