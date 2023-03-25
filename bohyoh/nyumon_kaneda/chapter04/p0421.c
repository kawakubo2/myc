#include <stdio.h>

int main(void)
{
    int len;
    puts("正方形を作ります。");
    printf("何段ですか？");
    fscanf(stdin, "%d", &len);
    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= len; j++) {
            putchar('*');
        }
        putchar('\n');
    }
}