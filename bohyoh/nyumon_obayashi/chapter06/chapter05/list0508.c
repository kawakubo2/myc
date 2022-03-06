#include <stdio.h>

void input_array(int x[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
}

void reverse(int x[], int n)
{
    int i;
    for (i = 0; i < n / 2; i++) {
        int tmp = x[i];
        x[i] = x[n - 1 - i];
        x[n - 1 - i] = tmp;
    }
}

void print_array(const int x[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }
}

int main(void)
{
    int n;
    printf("配列の要素数を入力してください : ");
    scanf("%d", &n);

    int m[n];
    input_array(m, n);
    reverse(m, n);
    print_array(m, n);

    return 0;
}

