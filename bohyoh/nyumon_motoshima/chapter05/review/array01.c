#include <stdio.h>

int array_sum(int a[], int n)
{
    
}

int main()
{
    int numbers[] = {8, 3, 5, 1, 9, 7, 2, 4, 10, 6};

    // 偶数の合計
    int even_sum = 0;
    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            even_sum += numbers[i];
        }
    }
    printf("偶数の合計: %d\n", even_sum);

    return 0;
}