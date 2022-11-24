#include <stdio.h>

int main(void)
{
    int i, j, len;
    printf("短辺: "); fscanf(stdin, "%d", &len);
    for (i = 1; i <= len; i++) {
        for (j = 1; j <= len - i; j++) {
            putchar(' ');
        }
        for (j = 1; j <= i; j++) {
            putchar('*');
        }
        putchar('\n');
    }
}