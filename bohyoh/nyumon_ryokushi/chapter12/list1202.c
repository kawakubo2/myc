#include <stdio.h>
#include <string.h>

#define NAME_LEN 64

struct student {
    char    name[NAME_LEN];
    int     height;
    float   weight;
    long    schols;
};

int main(void)
{
    struct student sanaka;

    strcpy(sanaka.name, "Sanaka");
    sanaka.height = 175;
    sanaka.weight = 62.5;
    sanaka.schols = 73000;

    printf("氏　名 = %10s\n", sanaka.name);
    printf("身　長 = %10d\n", sanaka.height);
    printf("体　重 = %10.1f\n", sanaka.weight);
    printf("奨学金 = %10ld\n", sanaka.schols);

    return 0;
}

