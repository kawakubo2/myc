#include <stdio.h>

void twice(int *n)
{
    *n *= 2;
}

int twice_array(int n[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        n[i] *= 2;
    }
}

void print_array(const int n[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", n[i]);
    }
    putchar('\n');
}

int main(void)
{
    int i, a, c;
    puts("与えられた整数を2倍します。");
    printf("整数a: "); scanf("%d", &a);
    c = a;
    twice(&a);
    printf("%dの2倍は%dです。\n", c, a);

    int b[] = { 1, 2, 3, 4, 5 };
    twice_array(b, 5);

    print_array(b, 5);

    return 0;
}

