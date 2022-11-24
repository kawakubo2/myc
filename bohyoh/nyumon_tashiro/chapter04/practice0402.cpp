#include <stdio.h>

int main(void)
{
    int i, a, b, sum = 0;
    puts("二つの整数を入力してください");
    printf("整数a: "); fscanf(stdin, "%d", &a);
    printf("整数b: "); fscanf(stdin, "%d", &b);
    if (a > b) {
        int tmp = b;
        b = a;
        a = tmp;
    }
    i = a;
    do {
        sum += i;
        i++; // i = i + 3 ---> i += 3
    } while (i <= b);
    printf("合計: %d\n", sum);
    return 0;
}