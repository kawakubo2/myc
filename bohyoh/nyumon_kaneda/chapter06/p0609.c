#include <stdio.h>

void rev_intary(int v[], int n)
{
    for (int i = 0; i < n / 2; i++) {
        int tmp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = tmp;
    }
}
void print_array(const int v[], int n)
{
    printf("{ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("}\n");
}
int main(void)
{
    int size;
    puts("配列の並びを反転します。");
    printf("要素数: "); fscanf(stdin, "%d", &size);
    int x[size];
    // 配列に要素を格納
    for (int i = 0; i < size; i++) {
        printf("x[%d]: ", i); fscanf(stdin, "%d", &x[i]);
    }
    printf("反転する前の配列: ");
    print_array(x, size);
    rev_intary(x, size);
    printf("反転した後の配列: ");
    print_array(x, size);
    return 0;
}