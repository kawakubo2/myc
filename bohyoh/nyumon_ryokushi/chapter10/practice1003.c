#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort3(int *a, int *b, int *c)
{
    if (*a > *b) swap(a, b);
    if (*b > *c) swap(b, c);
    if (*a > *b) swap(a, b);
}

int main(void)
{
    int n1, n2, n3;
    puts("三つの整数を入力してください。");
    printf("整数1 : "); scanf("%d", &n1);
    printf("整数2 : "); scanf("%d", &n2);
    printf("整数3 : "); scanf("%d", &n3);

    sort3(&n1, &n2, &n3);

    printf("%d <= %d <= %d\n", n1, n2, n3);

    return 0;
}

