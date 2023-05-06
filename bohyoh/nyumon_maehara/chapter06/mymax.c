#include <stdio.h>

// 関数宣言
int max(int x, int y);
int main(void);

int main(void)
{
    int a, b;
    puts("2つの整数値の大きい方を返します。");
    printf("1番目: ");
    fscanf(stdin, "%d", &a);
    printf("2番目: ");
    fscanf(stdin, "%d", &b);

    // aやbを実引数と呼ぶ
    int m = max(a, b);
    printf("大きい方の値は%dです。\n", m);

    return 0;
}

// 関数定義
// xやyを仮引数
int max(int x, int y)
{
    return x > y ? x : y; // 戻り値(返り値)
}