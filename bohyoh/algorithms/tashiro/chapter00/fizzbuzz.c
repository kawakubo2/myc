#include <stdio.h>

/*
FizzBuzz問題
1から順に数え上げ、3の倍数の場合は「Fizz」、5の倍数の場合は「Buzz」、
3の倍数でかつ5の倍数の場合は「FizzBuzz」と出力。それ以外はそのまま
数値を表示する。
例
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz
*/
int main(void)
{
    int i;
    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
}