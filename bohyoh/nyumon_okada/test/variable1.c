#include <stdio.h>

int gn1;

int sum_diff(int n1, int n2, int *sum, int *diff)
{
    *sum = n1 + n2;
    *diff = (n1 > n2) ? n1 - n2 : n2 - n1;

    return 1;
}


int main(void)
{
    int i, j, n1 = 12, n2 = 8, wa, sa;
    double d1 = 10.23;
    char str[10] = "";

    sum_diff(n1, n2, &wa, &sa);
    printf("wa = %d, sa = %d\n", wa, sa);
    
    for (i = 0; i < 10; i++) {
        printf("i = %d\n", i);
    }

    printf("n1=%d\n", n1);
    printf("gn1=%d\n", gn1);

    n1 = d1;
    printf("n1=%d\n", n1);
    
    if (gn1) {
        printf("gn1には値が設定されている\n");
    } else {
        printf("gn1には値が設定されていない\n");
    }

    return 0;
}
