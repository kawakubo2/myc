#include <stdio.h>

int main(void)
{
    float sum1 = 0.0F;
    for (float x = 0.0; x <= 1.0; x += 0.01) {
        sum1 += x;
    }
    int sum = 0;
    for (int y = 0; y <= 100; y++) {
        sum += y;
    }
    float sum2 = sum / 100.0;
    printf("float型の総和: %f\n", sum1);
    printf("int型型の総和を100.0で除算: %f\n", sum2);

    return 0;
}