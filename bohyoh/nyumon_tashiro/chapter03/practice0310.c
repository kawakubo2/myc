#include <stdio.h>

int main(void)
{
    int a, b, c;
    puts("三つの整数を入力してください");
    printf("整数A: "); fscanf(stdin, "%d", &a); 
    printf("整数B: "); fscanf(stdin, "%d", &b); 
    printf("整数C: "); fscanf(stdin, "%d", &c); 

    if (a == b && b == c) {
        puts("三つの値は等しいです。");
    } else if (a == b || b == c || c == a) {
        puts("二つの値は等しいです。");
    } else {
        puts("三つの値は異なります。");
    }
    return 0;
}