#include <stdio.h>

int main(void)
{
    int in[] = {-999, 3, 2, 1, 6, 5, 4};
    int out[7] = {0};
    int tail = 0;
    int size = 1;
    out[1] = in[1];
    for (int i = 2; i < 7; i++) {
        tail = out[size];
        size++;
        out[size] = tail + in[i];
    }
    printf("out[4]=%d\n", out[5]);

    return 0;
}