#include <stdio.h>

void swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

void sort3(int *n1, int *n2, int *n3)
{
    if (*n1 > *n2)
        swap(n1, n2);
    if (*n2 > *n3)
        swap(n2, n3);
    if (*n1 > *n2)
        swap(n1, n2);
}

int main(void)
{
    int na, nb, nc;
    puts("3つの整数を入力してください。");
    printf("整数A : "); scanf("%d", &na);
    printf("整数B : "); scanf("%d", &nb);
    printf("整数C : "); scanf("%d", &nc);

    sort3(&na, &nb, &nc);

    printf("整数A = %d 整数B = %d 整数C = %d\n", na, nb, nc);

    return 0;
}

