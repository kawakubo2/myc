#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 4) {
        printf("引数は3個必要です。\n");
        return -1;
    }
    double upperbase, lowerbase, height;
    upperbase = atof(argv[1]);
    lowerbase = atof(argv[2]);
    height    = atof(argv[3]);

    printf("上底が %.1f cm、下底が %.1f cm、高さが %.1fcm の台形の面積は %.1f 平方cmです。\n", upperbase, lowerbase, height,\
            (upperbase + lowerbase) * height / 2);

    return 0;
}

