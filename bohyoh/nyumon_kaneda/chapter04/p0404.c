#include <stdio.h>

int main(void)
{
    int no;
    printf("正の整数を入力してください: ");
    fscanf(stdin, "%d", &no);

    if (no > 0) {
        while (no > 0) {
            printf("%d ", no--);
        }
        printf("\n");
    }
    return 0;
}