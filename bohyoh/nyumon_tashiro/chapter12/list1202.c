#include <stdio.h>
#include <string.h>

#define NAME_LEN 64

struct student {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
};

int main(void)
{
    struct student sanaka;

    strcpy (sanaka.name, "Sanaka");
    sanaka.height = 175;
    sanaka.weight = 62.5;
    sanaka.schols = 73000;

    printf("氏　名 = %s\n", sanaka.name);
    printf("身　長 = %d\n", sanaka.height);
    printf("体　重 = %.1f\n", sanaka.weight);
    printf("奨学金 = %ld\n", sanaka.schols);

    return 0;
}