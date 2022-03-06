#include <stdio.h>

int main(void)
{
    double upperbase, lowerbase, height;
    puts("台形の面積を求めます。");
    printf("上底 下底 高さを半角空白区切りで入力してください\n");
    scanf("%lf %lf %lf", &upperbase, &lowerbase, &height);
    printf("上底が%.1fcm、下底が%.1fcm、高さが%.1fcmの台形の面積は%.1f平方cmです。\n",\
            upperbase, lowerbase, height, (upperbase + lowerbase) * height / 2);
    return 0;
}

