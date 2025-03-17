#include <stdio.h>

int main(void)
{
    int min, max, step;
    printf("身長(cm)の下限: "); scanf("%d", &min);
    printf("身長(cm)の上限: "); scanf("%d", &max);
    printf("何cm毎: "); scanf("%d", &step);

    for (int height = min; height <= max; height += step) {
        printf("%dcm  %5.2fkg\n", height, (height - 100) * 0.9);
    }

    return 0;
}

