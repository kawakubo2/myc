#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]);

int main(int argc, char *argv[])
{
    if (argc != 4) {
        printf("使用法: trapezoid 上底 下底 高さ\n");
        printf("例 trapezoid 4.2 5.8 5.0");
        return -1;
    }
    double upperbase, lowerbase, height;
    upperbase = atof(argv[1]);
    lowerbase = atof(argv[2]);
    height    = atof(argv[3]);

    printf("台形の面積: %.3f\n", (upperbase + lowerbase) * height / 2);

    return 0;
}