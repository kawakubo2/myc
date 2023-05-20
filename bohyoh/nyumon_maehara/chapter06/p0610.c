#include <stdio.h>

void intary_rcpy(int dest[], const int source[], int size)
{
    for (int i = 0; i < size; i++) {
        dest[size - 1 - i] = source[i];
    }
}
void input_array(int v[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("v[%d]: ", i);
        fscanf(stdin, "%d", &v[i]);
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
    puts("配列1から配列2へ並び順を反転してコピーします。");
    printf("要素数: "); fscanf(stdin, "%d", &size);
    int v1[size];
    int v2[size];
    input_array(v1, size);
    printf("コピー前: "); print_array(v1, size);
    intary_rcpy(v2, v1, size);
    printf("コピー後: "); print_array(v2, size);
    return 0;
}