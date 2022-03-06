#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // char **argv == char *arv[]
{
    int i;
    double upperbase, lowerbase, height;
    if (argc != 4) {
        printf("使用法: trapezoid 上底 下底 高さ\n");
        printf("使用例: trapezoid 5.2 4.8 5.0\n");
        exit(EXIT_FAILURE);
    }
    upperbase = atof(argv[1]);
    lowerbase = atof(argv[2]);
    height    = atof(argv[3]);
    
    printf("上底が%.1fcm、下底が%.1fcm、高さが%.1fcmの台形の面積は%.1f平方cmです。\n",\
            upperbase, lowerbase, height, (upperbase + lowerbase) * height / 2);

    return 0;
}

