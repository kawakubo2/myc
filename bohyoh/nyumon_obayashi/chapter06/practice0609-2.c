#include <stdio.h>

#define NUMBER 100

void rev_intary(int v[], int n) {
    int i;
    for (i = 0; i < n / 2; i++) {
        int tmp = v[i];
        v[i] = v[n - i - 1];
        v[n - i - 1] = tmp;
    }
}

void print_array(int v[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(void)
{
    int i, n;
    int a[NUMBER];
    printf("配列の要素数を入力してください : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("整数%d : ", i + 1);
        scanf("%d", &a[i]);
    }

    puts("反転前");
    print_array(a, n);

    rev_intary(a, n);

    puts("反転後");
    print_array(a, n);

    return 0;
}


