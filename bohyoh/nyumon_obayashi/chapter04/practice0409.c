#include <stdio.h>

int main(void)
{
    int i, no;
    printf("正の整数を入力してください : ");
    scanf("%d", &no);

    for (i = 1; i <= no; i++) {
        if (i % 3 == 0) {
            putchar('-');
        } else if (i % 3 == 1){
            putchar('+');
        } else {
            putchar('*');
        }
    }
    putchar('\n');

    return 0;
}

