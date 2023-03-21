#include <stdio.h>

int main(void)
{
    int no;
    printf("正の整数を入力してください: ");
    fscanf(stdin, "%d", &no);

    for (int i = 0; i <= no; i++) {
        printf("%d ", i);
    }
    putchar('\n');

    return 0;
}