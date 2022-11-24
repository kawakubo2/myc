#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

int factorial(int n)
{
    if (n > 0)
        return n * factorial(n - 1);
    else
        return 1;
}

int main(void)
{
    int num;
    char buffer[BUFFER_SIZE];
    printf("整数を入力してください: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    num = atoi(buffer);

    printf("%dの階乗は%dです。\n", num, factorial(num));

    return 0;
}