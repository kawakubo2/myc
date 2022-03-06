#include <stdio.h>

int main(void)
{
    int i = 0, sum = 0;
    int num[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
abc:
    if (i < 10) {
        sum += num[i];
        i++;
        goto abc;
    }

    printf("合計: %d\n", sum);

    return 0;
}


