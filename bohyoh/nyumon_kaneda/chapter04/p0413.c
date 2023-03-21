#include <stdio.h>

int main(void)
{
    int num;
    printf("nの値: ");
    fscanf(stdin, "%d", &num);

    int sum = 0;
    for (int i = 1; i <= num; i++) {
        sum += i;
    }
    printf("1～%dまでの総和は%dです。\n", num, sum);

    return 0;
}