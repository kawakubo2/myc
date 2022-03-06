#include <stdio.h>

void rev_intary(int v[], int n)
{
    int i, tmp;
    for (i = 0; i < n / 2; i++) {
        tmp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = tmp;
    }
}

void print_array(int v[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(void)
{
    int i;

    puts("要素数が8個(偶数)の場合");
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    printf("--- 反転前 ---\n");
    print_array(a, 8);

    rev_intary(a, 8);

    printf("--- 反転後 ---\n");
    print_array(a, 8);

    puts("要素数が7個(奇数)の場合");
    int b[] = { 1, 2, 3, 4, 5, 6, 7 };
    printf("--- 反転前 ---\n");
    print_array(b, 7);

    rev_intary(b, 7);

    printf("--- 反転後 ---\n");
    print_array(b, 7);

    return 0;
}

