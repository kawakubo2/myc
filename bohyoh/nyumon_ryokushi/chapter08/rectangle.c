#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3) {
        printf("使用法: ./rectangle 幅 高さ\n");
        printf("例: ./rectangle 10 5\n");
        return -1;
    }

    int width = atoi(argv[1]);
    int height = atoi(argv[2]);
    printf("幅が%dcm、高さが%dcmの長方形の面積は%d平方cmです。\n",\
            width, height, width * height);

    return 0;
}
