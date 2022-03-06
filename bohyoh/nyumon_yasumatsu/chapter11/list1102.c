/*
 * このプログラムは s = "DEF"でコンパイルエラーとなる
 */

#include <stdio.h>

int main(void)
{
    char s[] = "ABC";
    printf("s = \"%s\"\n", s);
    s = "DEF"; // "assignment to expression with array type"というエラーメッセージ
    printf("s = \"%s\"\n", s);

    return 0;
}

