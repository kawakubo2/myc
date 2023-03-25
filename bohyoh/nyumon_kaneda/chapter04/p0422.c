#include <stdio.h>

int main(void)
{
    int len1, len2;
    puts("横長の長方形を作ります。");
    printf("一辺(その1): "); fscanf(stdin, "%d", &len1);
    printf("一辺(その2): "); fscanf(stdin, "%d", &len2);
    if (len1 > len2) {
        int tmp = len1;
        len1 = len2;
        len2 = tmp;
    }
    for (int i = 1; i <= len1; i++) {
        for (int j = 1; j <= len2; j++) {
            putchar('*');
        }
        putchar('\n');
    }
}