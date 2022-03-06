#include <stdio.h>

int main(void)
{
    double upper_base, lower_base, height; /* 変数宣言 */

    upper_base = 56.2523;
    lower_base = 78.1895;
    height     = 28.8912354;

    double area = (upper_base + lower_base) * height / 2;

    printf("上底が%.1fcm、下底が%.1fcm、高さが%.1fcmの台形の面積は%.1f平方cmです。\n",
            upper_base, lower_base, height, area);

    return 0;
}
