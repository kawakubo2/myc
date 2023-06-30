#include <stdio.h>

int sumup(int n)
{
    if (n > 1) {
        return n + sumup(n - 1);
    } else {
        return 1;
    }
}
int main(void)
{
    int n, sum;
    puts("1～nまでの合計をもとめます。");
    printf("整数値n: "); fscanf(stdin, "%d", &n);
    sum = sumup(n);
    printf("%d～%dの合計は: %d\n", 1, n, sum);

    return 0;
}