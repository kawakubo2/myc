#include <stdio.h>

int pow4(int n)
{
    int i;
    int result = 1;
    for (i = 0; i < 4; i++) {
        result *= n;
    }
    return result;
}
int main(void)
{
    int n, answer;
    printf("整数: "); scanf("%d", &n);
    printf("%dの4乗は%dです。\n", n, pow4(n));

    return 0;    
}
