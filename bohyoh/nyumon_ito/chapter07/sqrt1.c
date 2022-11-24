#include <stdio.h>
#include <math.h>

#define MAX 50

int main(void)
{
    int i;
    double x, left, right, mid;
    do {
        printf("正の数値: "); scanf("%lf",&x);
    } while (x < 0 || x > 100);

    for (i = 0; i <= 10; i++) {
        if (x >= i * i && x < (i + 1) * (i + 1)) {
            break;
        }
    }
    left = (double)i;
    right = (double)(i + 1);
    i = 0;
    while(left <= right) {
        mid = (left + right) / 2;
        if (x > mid * mid) {
            left = mid;
        } else if (x < mid * mid) {
            right = mid;
        } else {
            break;
        }
        i++;
        if (i > MAX) break;
    }
    printf("%lfの平方根の近似値=%.15lf\n", x, mid);
    printf("%lfの平方根の　　　=%.15lf\n", x, sqrt(x));

    return 0;    
}