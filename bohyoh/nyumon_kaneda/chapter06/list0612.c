#include <stdio.h>
// 関数定義
void set_zero(int v[], int n)
{
    for (int i = 0; i < n; i++) {
        v[i] = 0;
    }
}
// 関数定義
void print_array(const int v[], int n)
{
    printf("{ ");
    for (int i = 0; i < n; i++) {
        printf("%2d ", v[i]);
    }
    printf("}\n");
}
int main(void)
{
    int ary1[] = {1, 2, 3, 4, 5};
    int ary2[] = {3, 2, 1};
    printf("ary1 = "); print_array(ary1, 5); // 関数呼び出し
    printf("ary2 = "); print_array(ary2, 3); // 関数呼び出し

    set_zero(ary1, 5);
    set_zero(ary2, 3);

    printf("両配列の全要素に0を代入しました。\n");
    printf("ary1 = "); print_array(ary1, 5);
    printf("ary2 = "); print_array(ary2, 3);

    return 0;
}