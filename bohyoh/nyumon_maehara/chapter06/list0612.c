#include <stdio.h>

void set_zero(int v[], int size)
{
    for (int i = 0; i < size; i++) {
        v[i] = 0;
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
    int ary1[] = {1, 2, 3, 4, 5};
    int ary2[] = {3, 2, 3};

    printf("ary1 = "); print_array(ary1, 5);
    printf("ary2 = "); print_array(ary2, 3);

    set_zero(ary1, 5);
    set_zero(ary2, 3);

    printf("両配列の全要素に0を代入しました。\n");
    printf("ary1 = "); print_array(ary1, 5);
    printf("ary2 = "); print_array(ary2, 3);

    return 0;
}