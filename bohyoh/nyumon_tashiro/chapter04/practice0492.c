#include <stdio.h>

int main(void)
{
    int i, no, sum;
    printf("正の整数: "); fscanf(stdin, "%d", &no);
    sum = 0;
    for(i = 3; i <= no; i += 3) {
        sum += i;
    }
    printf("1～%dまでに存在する3の倍数の合計: %d\n", no, sum);
}