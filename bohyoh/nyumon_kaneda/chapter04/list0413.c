#include <stdio.h>

int main(void)
{
    int no;
    printf("正の整数値: ");
    fscanf(stdin, "%d", &no);
    for (int i = 1; i <= no; i++) {
        putchar('*');
    }
    putchar('\n');

    return 0;
}