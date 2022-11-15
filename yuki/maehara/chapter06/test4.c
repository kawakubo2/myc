#include <stdio.h>

int main(void)
{
    int i, n;
    printf("正の整数: ");
    fscanf(stdin, "%d", &n);
    for (i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}