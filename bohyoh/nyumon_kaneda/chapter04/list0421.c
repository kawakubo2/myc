#include <stdio.h>

int main(void)
{
    int tanpen;
    puts("右下直角二等辺三角形を表示します。");
    printf("短辺: ");
    fscanf(stdin, "%d", &tanpen);
    for (int i = 1; i <= tanpen; i++) {
        // 空白の表示 表示する個数 = 短辺の長さ - i
        for (int j = 1; j <= tanpen - i; j++) {
            putchar('-');
        }
        for (int j = 1; j <= i; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}