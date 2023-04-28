#include <stdio.h>

#define NUM 5

void input_array(int a[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("a[%d]: ", i);
        fscanf(stdin, "%d", &a[i]);
    }
}

void copy_b_from_a(const int a[], int b[], int size)
{
    for (int i = 0; i < size; i++) {
        b[i] = a[i];
    }
}

void print_result(const int a[], const int b[], int size)
{
    puts("   a   b");
    puts("--------");
    for (int i = 0; i < 5; i++) {
        printf("%4d%4d\n", a[i], b[i]);
    }
}

int main(void)
{
    int a[NUM];
    int b[NUM];

    input_array(a, NUM);

    copy_b_from_a(a, b, NUM);

    print_result(a, b, NUM);

    return 0;
}