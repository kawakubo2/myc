#include <stdio.h>

#define NUMBER 7
#define LAST_INDEX NUMBER - 1

void init_array(int x[], int size)
{
    for (int i = 0; i < NUMBER; i++) {
        printf("x[%d]: ", i); fscanf(stdin, "%d", &x[i]);
    }
}

void reverse_array(int x[], int size)
{
    for (int i = 0; i < NUMBER / 2; i++) {
        int tmp = x[i];
        x[i] = x[LAST_INDEX - i];
        x[LAST_INDEX - i] = tmp;
    }
}

void print_array(int x[], int size)
{
    for (int i =  0; i < size; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }
}
int main(void)
{
    int x[NUMBER]; // 配列領域の確保
    
    init_array(x, NUMBER);  // コンソールから要素を入力

    puts("---< 反転前 >---");
    print_array(x, NUMBER); // 配列の表示

    reverse_array(x, NUMBER); // 配列の反転

    puts("---< 反転後 >---");
    print_array(x, NUMBER); // 配列の表示
    return 0;
}