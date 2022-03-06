#include <stdio.h>

int main(void)
{
    int i, no;
    do {
        printf("正の整数を入力してください : ");
        scanf("%d", &no);
    } while (no <= 0);

    i = 0;
    while (i + 2 <= no) {
        printf("%d ", i += 2);
    }
    putchar('\n');

    return 0;
}

