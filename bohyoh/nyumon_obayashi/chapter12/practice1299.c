#include <stdio.h>

int mysum(int n[], int size)
{
    int i;
    int total = 0;
    for (i = 0; i < size; i++) {
        total += n[i];
    }
    return total;
}

int mysum_positive(int n[], int size)
{
    int i;
    int total = 0;
    for (i = 0; i < size; i++) {
        if (n[i] > 0) {
            total += n[i];
        }
    }
    return total;
}

int mysum_even(int n[], int size)
{
    int i;
    int total = 0;
    for (i = 0; i < size; i++) {
        if (n[i] % 2 == 0) {
            total += n[i];
        }
    }
    return total;
}

/* 高階関数 */
int mysum_higher(int n[], int size, int (*func)(int))
{
    int i;
    int total = 0;
    for (i = 0; i < size; i++) {
        if (func(n[i])) {
            total += n[i];
        }
    }
    return total;
}

int even(int n) {
    return n % 2 == 0;
}

int positive(int n) {
    return n > 0;
}

int main(void)
{
    int i, total;
    int num[10] = { -2, -1, 0, 1, 2, 3, 4, 5, 6, 7 };
    
    total = mysum_higher(num, 10, positive);

    printf("正数合計: %d\n", total);

    total = mysum_higher(num, 10, even);

    printf("偶数合計: %d\n", total);

    return 0;
}



