#include <stdio.h>

int main(void)
{
    int num = 5;
    printf("num=%d\n", num);
    
    puts("複合代入演算子");

    num += 10; // num = num + 10
    printf("num += 10 ---> %d\n", num);

    num -= 7; // num = num - 7
    printf("num -= 7 ---> %d\n", num);

    num *= 5; // num = num * 5
    printf("num *= 5 ---> %d\n", num);

    num /= 7; // num = num / 5
    printf("num /= 7 ---> %d\n", num);

    num %= 2; // num = num % 2
    printf("num %%= 2 ---> %d\n", num);
    
    return 0;
}