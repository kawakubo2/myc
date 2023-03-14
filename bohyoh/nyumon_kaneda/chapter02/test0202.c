#include <stdio.h>

int main(void)
{
    double x = 0.2;
    double y = 0.6;
    printf("%21.16f\n", x * 3);
    if (x * 10 * 3 == y * 10) { // 乗算の場合は左の方から実行していく(左結合)
        printf("x * 3 は 0.6 と等しい。\n");
    } else {
        printf("x * 3 は 0.6 と等しくない。\n");
    }

    return 0;
}