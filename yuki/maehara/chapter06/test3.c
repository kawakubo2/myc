#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 4) {
        printf("引数の個数が異なります。\n");
        printf("使用法: test3 上底 下底 高さ\n");
        printf("例: test3 12.3 27.7. 15.0\n");
        return 1;
    }
    double upperbase = atof(argv[1]);
    double lowerbase = atof(argv[2]);
    double height    = atof(argv[3]);

    printf("台形の面積: %.2f\n", (upperbase + lowerbase) * height / 2);

    return 0;
}