#include <stdio.h>

int main(void)
{
    int n1 = 10;
    int n2 = 20;
    int n3;
    if (n1 > 5 || (n2 += 10)) {
        n3 = n1 + n2;
    }
    printf("n1=%d, n2=%d, n3=%d\n", n1, n2, n3);

    n1 = 10;
    n2 = 20; 
    if (n1 > 5 && (n2 += 10)) {
        n3 = n1 + n2;
    }
    printf("n1=%d, n2=%d, n3=%d\n", n1, n2, n3);

    return 0;
}