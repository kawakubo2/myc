#include <stdio.h>

void swap(int *px, int *py)
{
    int tmp = *px;
    *px = *py;
    *py = tmp;
}

void sort3(int *n1, int *n2, int *n3)
{
    if (*n3 < *n2) swap(n3, n2);
    if (*n2 < *n1) swap(n2, n1);
    if (*n3 < *n2) swap(n3, n2);
}

int main(void)
{
    int na, nb, nc;
    puts("3値をソートします");
    printf("整数1: "); scanf("%d", &na);
    printf("整数2: "); scanf("%d", &nb);
    printf("整数3: "); scanf("%d", &nc);

    sort3(&na, &nb, &nc);

    printf("%d <= %d <= %d\n", na, nb, nc);

    return 0;
}