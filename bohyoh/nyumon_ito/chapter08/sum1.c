#include <stdio.h>

int my_sum(int n)
{
    if (n > 1) return n + my_sum(n - 1);
    return 1;
}

int main(void)
{
    int answer = my_sum(10);
    printf("1～10までの合計: %d\n", answer);
    return 0;
}