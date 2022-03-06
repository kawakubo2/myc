#include <stdio.h>

int main(void)
{
    int i = 0, idx = 0;
    char *str[] = { "日", "月", "火", "水", "木", "金", "土" };
    while(i++ < 21) {
        idx %= 7;
        printf("%s ", str[idx++]);
    }
    putchar('\n');

    return 0;
}

