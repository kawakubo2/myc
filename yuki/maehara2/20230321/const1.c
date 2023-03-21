#include <stdio.h>

int main(void)
{
    int n;
    n = 10;
    printf("n=%d\n", n);
    n += 5; // n = n + 5
    printf("n=%d\n", n);

    // 定数
    const int age = 23;
    printf("%d歳です。\n", age);

    return 0;
}