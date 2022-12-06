#include <stdio.h>
#include <stdlib.h>

void set_idx(int *v, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        *(v + i) = i;
        // v[i] = i;
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("使用法: ./practice1004 配列の要素数\n");
        printf("例) ./practice1004 5\n");
        return 1;
    }
    int i;
    int n = atoi(argv[1]);
    int nums[n];
    set_idx(nums, n);
    for (i = 0; i < n; i++) {
        printf("nums[%d] = %d\n", i, nums[i]);
    }
    printf("\n");

    return 0;
}