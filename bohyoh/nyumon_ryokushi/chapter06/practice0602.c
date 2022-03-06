#include <stdio.h>

int min3(int n1, int n2, int n3)
{
    int min = n1;
    if (n2 < min) min = n2;
    if (n3 < min) min = n3;
    return min;
}

int main(void)
{
    int min, a, b, c;
    puts("3つの整数の最小を求めます");
    printf("正数a: ");
    scanf("%d", &a);
    printf("正数b: ");
    scanf("%d", &b);
    printf("正数c: ");
    scanf("%d", &c);

    min = min3(a, b, c);

    printf("最小値: %d\n", min);
 
    
    return 0;
}

