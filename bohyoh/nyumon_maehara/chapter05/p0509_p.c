#include <stdio.h>
#include "p0509_p.h"

void input_array(int a[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("a[%d]: ", i);
        fscanf(stdin, "%d", &a[i]);
    }
}
void copy_a2b_reverse(const int a[], int b[], int size)
{
    for (int i = 0; i < size; i++) {
        b[size - 1 - i] = a[i];
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
