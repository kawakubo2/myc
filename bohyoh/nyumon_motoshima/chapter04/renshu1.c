#include <stdio.h>

int main(void)
{
    int i = 0, no;
    printf("正の整数: "); scanf("%d", &no);

    while (i++ < no) {
        putchar('*');
    }
    putchar('\n');

    return 0;
}