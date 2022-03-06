#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double upperbase = atof(argv[1]);
    double lowerbase = atof(argv[2]);
    double height    = atof(argv[3]);

    printf("台形の面積は%lfです。\n", ((upperbase + lowerbase) * height / 2));

    printf("%s終了\n", argv[0]);

    return 0;
}

