#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 4) {
        printf("使用法: trapezoid2 上底 下底 高さ\n");
        printf("例: trapezoid2 7.2 2.8 5.0\n");
        return -1;
    }
    double upperbase = atof(argv[1]);
    double lowerbase = atof(argv[2]);
    double height    = atof(argv[3]);
    printf("台形の面積: %.1f\n",
        (upperbase + lowerbase) * height / 2);
    return 0;
}