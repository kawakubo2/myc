#include <stdio.h>

int main(void)
{
    int num;
    printf("プリントする個数: "); scanf("%d", &num);

    int i = 0;
    while (i < num) {
        if (i % 2 == 0) {
            putchar('+');
        } else {
            putchar('-');
        }
        i++;
    }
    putchar('\n');

    return 0;
}

