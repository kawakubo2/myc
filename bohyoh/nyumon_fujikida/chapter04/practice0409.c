#include <stdio.h>

int main(void)
{
    int i = 0, no;
    do {
        printf("正の整数を入力してください:");
        scanf("%d", &no);
    } while (no <= 0);

    while (no-- > 0) {
        i %= 2;
        if (i++)
            putchar('-');
        else 
            putchar('+');
    }

    putchar('\n');
}
