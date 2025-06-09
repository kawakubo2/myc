#include <stdio.h>

int main(void)
{
    int nums[] = {11, 32, 18, 24, 66};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += nums[i];
        if (i != 5 - 1) {
            printf("%d + ", nums[i]);
        } else {
            printf("%d ", nums[i]);
        }
    }
    printf("= %d\n", sum);
}