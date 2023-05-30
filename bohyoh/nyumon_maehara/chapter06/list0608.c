#include <stdio.h>

void put_chars(int ch, int n)
{
    while (n-- > 0) {
        putchar(ch);
    }
}
int main(void)
{
    int len;
    puts("右下直角二等辺三角形を作ります。");
    printf("短辺: "); fscanf(stdin, "%d", &len);

    for (int i = 1; i <= len; i++) {
        put_chars(' ', len - i);
        put_chars('*', i);
        putchar('\n');
    }

    return 0;
}