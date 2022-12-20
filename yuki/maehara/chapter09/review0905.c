#include <stdio.h>

int main(void)
{
    int data[] = { 31, 41, 59, 26, 53, 58, 97, 93, 23, 84 };
    int maxdata = data[0];
    int mindata = data[0];

    for (int i = 0; i < 10; i++) {
        if (data[i] > maxdata) {
            maxdata = data[i];
        }
        if (data[i] < mindata) {
            mindata = data[i];
        }
    }
    printf("最大値は %d です。\n", maxdata);
    printf("最小値は %d です。\n", mindata);
    return 0;
}