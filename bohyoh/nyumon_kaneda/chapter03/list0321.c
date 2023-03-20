#include <stdio.h>

int main(void)
{
    int sw;
    printf("整数: "); fscanf(stdin, "%d", &sw);

    puts("---< switch文 >---");
    switch(sw) {
        case 1: puts("A"); puts("B"); break;
        case 2: puts("C");
        case 5: puts("D"); break;
        case 6:
        case 7: puts("E"); break;
        default: puts("F"); break;
    }

    puts("---< if文 >---");
    if (sw == 1) {
        puts("A");
        puts("B");
    } else if (sw == 2) {
        puts("C");
        puts("D");
    } else if (sw == 5) {
        puts("D");
    } else if (sw == 6 || sw == 7) {
        puts("E");
    } else {
        puts("F");
    }
    return 0;
}