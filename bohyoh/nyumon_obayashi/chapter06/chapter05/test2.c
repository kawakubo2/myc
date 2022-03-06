#include <stdio.h>

#define NUMBER 5

int main(void)
{
    int i, n[NUMBER];
    for (i = 0; i < NUMBER; i++) {
        printf("n[%d] : ", i); scanf("%d", &n[i]);
    }

    for (i = 0; i < NUMBER; i++) {
        printf("n[%d] = %d\n", i, n[i]);
    }

    return 0;
}

