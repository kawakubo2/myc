#include <stdio.h>

int main(void)
{
    int num;
    printf("何個*を表示しますか: ");
    fscanf(stdin, "%d", &num);

    for (int i = 1; i <= num; i++) {
        putchar('*');
        if (i % 5 == 0) {
            putchar('\n');
        }
    }
    putchar('\n');

    return 0;
}