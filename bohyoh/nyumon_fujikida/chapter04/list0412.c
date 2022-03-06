#include <stdio.h>

int main(void)
{
    int i, no;

    do {
        printf("正の整数 : "); scanf("%d", &no);
    } while (no <= 0);

    for (i = 1; i <= no; i++) {
        putchar('*');
    }
    putchar('\n');

    return 0;
}

