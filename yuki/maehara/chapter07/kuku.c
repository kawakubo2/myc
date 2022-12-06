#include <stdio.h>

int main(void) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            count++;
            if (i * j > 30) {
                goto abc;
            }
            printf("%3d", i * j);
        }
        printf("\n");
    }
abc:
    printf("%d回\n", count);
    return 0;
}