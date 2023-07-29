#include <stdio.h>

void ary_set(int v[], int n, int val)
{
    for (int i = 0; i < n; i++) {
        v[i] = val;
    }
}
void print_array(int v[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    putchar('\n');
}
int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    puts("変更前");
    print_array(a, 5);
    ary_set(a, 2, 99);
    puts("ary_set(a, 2, 99)適用後");
    print_array(a, 5);
    puts("--------------");
    puts("変更前");
    print_array(b, 5);
    ary_set(&b[2], 2, 99);
    puts("ary_set(&b[2], 2, 99)適用後");
    print_array(b, 5);
}