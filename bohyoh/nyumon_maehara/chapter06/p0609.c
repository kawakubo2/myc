#include <stdio.h>

void rev_intary(int v[], int size)
{
    int last = size - 1;
    for (int i = 0; i < size / 2; i++) {
        int temp = v[i];
        v[i] = v[last - i];
        v[last - i] = temp;
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
void input_array(int v[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("v[%d]: ", i);
        fscanf(stdin, "%d", &v[i]);
    }
}
int main(void)
{
    int size;
    puts("配列を反転します。");
    printf("要素数: "); fscanf(stdin, "%d", &size);
    int x[size];
    input_array(x, size);
    printf("反転する前の配列: "); print_array(x, size);
    rev_intary(x, size);
    printf("反転した後の配列: "); print_array(x, size);

    return 0;
}