#include <stdio.h>

void increment(int x)
{
    x++;
}

void increment_array(int v[], int num)
{
    int i;
    for (i = 0; i < num; i++) {
        v[i]++;
    }
}

int main(void)
{
    int i;
    puts("基本型の場合");
    int n = 10;
    increment(n);
    printf("n = %d\n", n);

    puts("参照型の場合");
    int nums[] = {1, 2, 3, 4, 5};
    increment_array(nums, 5);
    for (i = 0; i < 5; i++) {
        printf("%3d", nums[i]);
    }
    putchar('\n');
    
    return 0;
}