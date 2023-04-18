#include <stdio.h>

int sum1(int a[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += a[i];
    }
    return total;
}

int even_sum(int a[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {
            total += a[i];
        }
    }
    return total;
}
int sum_between_3_and_8(int a[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] >= 3 && a[i] <= 8) {
            total += a[i];
        }
    }
    return total;
}

int is_even(int n) { return n % 2 == 0; }
int is_between_3_and_8(int n) { return n >= 3 && n <= 8; }

int sum(const int a[], int size, int (*filter)(int))
{
    int total = 0;
    for (int i = 0; i < size; i++) {
        if ((*filter)(a[i])) {
            total += a[i];
        }
    }
    return total;
}

int main(void)
{
    int numbers[] = {5, 9, 3, 8, 7, 4, 1, 10, 6, 2};
    int total = sum1(numbers, 10);
    printf("合計: %d\n", total);
    total = even_sum(numbers, 10);
    printf("偶数の合計: %d\n", total);
    total = sum_between_3_and_8(numbers, 10);
    printf("3～8までの数値の合計: %d\n", total);

    puts("---< 高階関数を使った例 >---");
    total = sum(numbers, 10, is_even);
    printf("偶数の合計: %d\n", total);
    total = sum(numbers, 10, is_between_3_and_8);
    printf("3～8までの数値の合計: %d\n", total);

    return 0;
}
