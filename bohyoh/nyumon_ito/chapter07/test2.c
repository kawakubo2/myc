#include <stdio.h>

int main(void)
{
    double x = 0.2;
    double y = 0.6;

    if (x * 10 * 3 == y * 10) {
        puts("等しい");
    } else {
        puts("等しくない");
    }
    
    int w, x, y, z;
    x = y = z = 10;

    w = x + (y * z);

    return 0;
}