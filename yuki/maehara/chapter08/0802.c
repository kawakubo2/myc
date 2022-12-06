#include <stdio.h>

int main(void); // 関数宣言
int add(int a, int b); // 関数宣言, 関数プロトタイプ, プロトタイプ宣言

int main(void)
{
    int x = 100;
    int y = 20;
    // x, yを実引数と呼ぶ
    int z = add(x, y); // 関数呼び出し
    printf("%d + %d = %d\n", x, y, z);

    return 0;
}

/*
main関数の定義よりも上でadd関数の宣言があれば、
add関数定義はmain関数より下に記述可能

int ・・・戻り値型
add　・・・関数名
int a, int b ・・・仮引数
c ・・・戻り値
*/
int add(int a, int b) { // 関数定義
    int c = a + b;
    return c;
}