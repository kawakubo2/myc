#include <stdio.h>

int main(void)
{
    int n1, n2;
    printf("整数1: "); scanf("%d", &n1); 
    printf("整数2: "); scanf("%d", &n2); 
    
    if (n1 == n2) {
        puts("それらの値は同じです。");
    } else {
        puts("それらの値は違います。");
    }

    printf("%d == %d ---> %d\n", n1, n2, n1 == n2);

    return 0;
}