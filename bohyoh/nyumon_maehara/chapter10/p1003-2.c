#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void sort4(int *n1, int *n2, int *n3, int *n4)
{
    if (*n1 > *n2) swap(n1, n2);
    if (*n2 > *n3) swap(n2, n3);
    if (*n3 > *n4) swap(n3, n4);
    if (*n1 > *n2) swap(n1, n2);
    if (*n2 > *n3) swap(n2, n3);
    if (*n1 > *n2) swap(n1, n2);
}
int main(void)
{
    int a, b, c, d;
    puts("4つの整数を昇順にソートします。");
    printf("整数A: "); fscanf(stdin, "%d", &a);
    printf("整数B: "); fscanf(stdin, "%d", &b);
    printf("整数C: "); fscanf(stdin, "%d", &c);
    printf("整数D: "); fscanf(stdin, "%d", &d);

    sort4(&a, &b, &c, &d);
    printf("a: %d b: %d c: %d d: %d\n", a, b, c, d);

    return 0;
}