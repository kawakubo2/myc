#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, max, max1, max2;
    printf("整数1: "); scanf("%d", &n1);
    printf("整数2: "); scanf("%d", &n2);
    printf("整数3: "); scanf("%d", &n3);
    printf("整数4: "); scanf("%d", &n4);

    max = (max1 = (n1 > n2 ? n1 : n2)) > (max2 = (n3 > n4 ? n3 : n4)) ? max1 : max2;
    printf("最大値: %d\n", max);
    return 0;
}