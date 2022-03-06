#include <stdio.h>

#define NUMBER 80

int main(void)
{
    int i, j, num = 15, max = 0;
    int tensu[NUMBER] = { 17, 38, 100, 95, 23, 62, 77, 45, 69, 81, 83, 51, 42, 36, 60 };
    int bunpu[11] = {0};

    for (i = 0; i < num; i++) {
        bunpu[tensu[i] / 10]++;
    }

    for (i = 0; i < 11; i++) {
        if (bunpu[i] > max) max = bunpu[i];
    }
    for (i = max; i >= 1; i--) {
        for (j = 0; j < 11; j++) {
            if (bunpu[j] >= i) {
                printf("  *");
            } else {
                printf("   ");
            }
        }
        putchar('\n');
    }

    for (i = 0; i < 11; i++) {
        printf("---");
    }
    putchar('\n');

    for (i = 0; i < 11; i++) {
        printf("%3d", i * 10);
    }
    putchar('\n');

    return 0;
    
}
