#include <stdio.h>

int main(void)
{
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            count++;
            int seki = i * j;
            if (seki > 30) {
                break;
            }
            printf("%3d", seki);
        }
        putchar('\n');
    }
    printf("回数: %d\n", count);
    return 0;
}