#include <stdio.h>

int main(void)
{
    int len;
    puts("左上直角二等辺三角形");
    printf("短辺: "); scanf("%d", &len);

    for (int i = len; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    puts("右上直角二等辺三角形");
    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= i - 1; j++) {
            putchar(' ');
        }
        for (int j = 1; j <= len - i + 1; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}

