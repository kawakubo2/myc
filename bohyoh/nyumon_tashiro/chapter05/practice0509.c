#include <stdio.h>

#define NUMBER 15

int main(void)
{
    int i, j, max;
    int tensu[NUMBER] = { 70, 100, 85, 63, 39, 58, 65, 78, 80, 69, 72, 77, 54, 95, 44 };
    int bunpu[11] = {0};
    for (i = 0; i < NUMBER; i++) {
        bunpu[tensu[i] / 10]++;
    }
    max = bunpu[0];
    for (i = 0; i < 11; i++) {
        if (bunpu[i] > max) max = bunpu[i];
    }
    for (i = max; i >= 1; i--) {
        for (j = 0; j < 11; j++) {
            if (bunpu[j] >= i)
                printf("  * ");
            else
                printf("    ");
        }
        putchar('\n');
    }
    for (i = 0; i < 11; i++) {
        printf("----");
    }
    putchar('\n');
    for (i = 0; i < 11; i++) {
        printf("%3d ", i * 10);
    }
    putchar('\n');
    
    return 0;
}