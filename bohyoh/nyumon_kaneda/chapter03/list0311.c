#include <stdio.h>

int main(void)
{
    int n1, n2;
    puts("二つの整数を入力せよ。");
    printf("整数1: ");  fscanf(stdin, "%d", &n1);
    printf("整数2: ");  fscanf(stdin, "%d", &n2);
    
    /*
        真偽値型(true, false)を返す式を条件式と呼ぶ
        ただし、C言語には真偽値型がないので、0以外をtrue、0をfalseとみなす。
    */
    if (n1 > n2) {
        printf("大きい方の値は%dです。\n", n1);
    } else {
        printf("大きい方の値は%dです。\n", n2);
    }

    return 0;
}