#include <stdio.h>

int main(void)
{
    int no;
    printf("正の整数: "); scanf("%d", &no);

    for (int i = 1; i <= no; i++) {
        printf("%d", i % 10);
    }
    printf("\n");

    return 0;
}