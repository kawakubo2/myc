#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double x = 0.2;
    double y = 0.6; 

    if (abs(x * 3 - y) < 1.0e-15) {
        printf("等しい\n");
    } else {
        printf("等しくない\n");
    }
    return 0;
}