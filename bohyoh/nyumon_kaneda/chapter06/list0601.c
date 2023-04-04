#include <stdio.h>

// a, bを仮引数(parameter)名
int max2(int a, int b)
{
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main(void)
{
    int n1, n2;
    puts("二つの整数を入力してください: ");
    printf("整数1: "); fscanf(stdin, "%d", &n1);
    printf("整数2: "); fscanf(stdin, "%d", &n2);

    printf("大きい方の値は%dです。\n", max2(n1, n2)); // n1, n2を実引数(argument)名

    return 0;
}