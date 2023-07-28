#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void sort3(int *n1, int *n2, int *n3)
{
    if (*n1 > *n2) swap(n1, n2);
    if (*n2 > *n3) swap(n2, n3);
    if (*n1 > *n2) swap(n1, n2);
}
int main(void)
{
    int a, b, c;
    puts("3つの整数を昇順にソートします。");
    printf("整数A: "); fscanf(stdin, "%d", &a);
    printf("整数B: "); fscanf(stdin, "%d", &b);
    printf("整数C: "); fscanf(stdin, "%d", &c);

    sort3(&a, &b, &c);
    printf("a: %d b: %d c: %d\n", a, b, c);

    return 0;
}