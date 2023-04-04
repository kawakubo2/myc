#include <stdio.h>

// 関数宣言
int add(int x, int y);

int main(void)
{
    int a = 8;
    int b = 5;
    // 関数呼び出し
    int ans = add(a, b);
    printf("%d + %d = %d\n", a, b, ans);

    return 0;
}

// 関数定義
int add(int x, int y)
{
    return x + y;
}