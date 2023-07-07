#include <stdio.h>

int main(void)
{
    puts("台形の面積を求めます。");
    double n[3];
    printf("上底 下底 高さ: ");
    fscanf(stdin, "%lf%lf%lf", &n[0], &n[1], &n[2]);
    printf("上底が%.1f、下底が%.1f、高さが%.1fの台形の面積は%.1fです。\n", n[0], n[1], n[2], (n[0] + n[1]) * n[2] / 2);
    return 0;
}