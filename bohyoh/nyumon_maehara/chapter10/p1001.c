#include <stdio.h>

void adjust_point(int *n)
{
    if (*n < 0) {
        *n = 0;
    } else if (*n > 100) {
        *n = 100;
    } else {
        ;  // 空文
    }
}

int main(void)
{
    int n;
    int sw;
    do {
        printf("整数n: ");
        fscanf(stdin, "%d", &n);
        adjust_point(&n);
        printf("n = %d\n", n);
        printf("続ける(0...続きる 1...やめる) : ");
        fscanf(stdin, "%d", &sw);
    } while (sw == 0);
}
