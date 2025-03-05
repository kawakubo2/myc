#include <stdio.h>

void print_even_or_odd(int n)
{
    if (n % 2 == 0) {
        puts("その数は偶数です。");
    } else {
        puts("その数は奇数です。");
    }
}

int main(void)
{
    int no;
    printf("整数: "); scanf("%d", &no);

    if (no > 0) 
    { // 0より大きい値
        print_even_or_odd(no);
    } 
    else 
    { // 0以下の値
        puts("正でない数が入力されています。");
    }

    return 0;
}