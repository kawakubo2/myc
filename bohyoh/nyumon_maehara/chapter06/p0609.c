#include <stdio.h>

void rev_intary(int v[], int size)
{
    for (int i = 0; i < size / 2; i++) {
        int temp = v[i];
        v[i] = v[size - 1 - i];
        v[size - 1 - i] = temp;
    }
}
void print_array(const int v[], int size)
{
    printf("{ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", v[i]);
    }
    printf("}\n");
}
int main(void)
{
    int size;
    puts("配列を反転します。");
    printf("要素数: "); fscanf(stdin, "%d", &size);
    int x[size];
    for (int i = 0; i < size; i++) {
        printf("x[%d]: ", i);
        fscanf(stdin, "%d", &x[i]);
    }
    rev_intary(x, size);
    print_array(x, size);

    return 0;
}