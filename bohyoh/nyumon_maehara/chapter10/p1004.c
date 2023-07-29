#include <stdio.h>

#define NUMBER 5
void set_idx(int *v, int n)
{
    for (int i = 0; i < n; i++) {
        *(v + i) = i; // v[i] = iと等しい v[i] ---> *(v + i)
    }
}
void print_array(int *v, int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", *(v + i));
    }
    putchar('\n');
}
void put_array(int *v, int n) 
{
    for (int i = 0; i < n; i++) {
        printf("v[%d]: ", i); fscanf(stdin, "%d", v + i);
    }
}

int main(void)
{
    int nums[NUMBER];
    printf("%d個の整数を入力してください。\n", NUMBER);
    put_array(nums, NUMBER);
    printf("インデックスを代入する前: \n");
    print_array(nums, NUMBER);
    set_idx(nums, NUMBER);
    print_array(nums, NUMBER);

    return 0;
}