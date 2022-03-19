#include <stdio.h>

int main(void)
{
    int num = 527;
    int result = 0;
    while (num > 0) {
        result = result * 10 + num % 10;
        num /= 10;
    }
    printf("%d\n", result);
}