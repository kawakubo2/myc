#include <stdio.h>

int main(void)
{
    int i;
    int n[5];

    printf("---< 解法1 >---\n");
    for (i = 0; i < 5; i++) {
        n[i] = 5 - i;
    }
    for (i = 0; i < 5; i++) {
        printf("n[%d] = %d\n", i, n[i]);
    }

    printf("---< 解法2 >---\n");
    for (i = 5; i > 0; i--) {
        n[5 - i] = i;
    }
    for (i = 0; i < 5; i++) {
        printf("n[%d] = %d\n", i, n[i]);
    }
    
    return 0;
}

