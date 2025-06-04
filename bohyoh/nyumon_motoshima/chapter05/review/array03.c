#include <stdio.h>

/*
整数型配列を受け取り、各数値を3倍する関数
[1, 2, 3] ---> [3, 6, 9]
*/
void triple(int *a, int n)
{
    while (n > 0) {
        (*a) *= 3;
        a++;
        n--;
    }
}

void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    putchar('\n');
}

int main()
{
    int nums[] = {1, 2, 3};
    print_array(nums, 3);
    triple(nums, 3);
    print_array(nums, 3);

    return 0;
}