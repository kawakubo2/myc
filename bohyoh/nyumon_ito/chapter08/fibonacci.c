// fibonacci.c
#include <stdio.h>
#include <time.h>

static int result[100] = {0}; 

int fibonacci(int n)
{
    int a, b;
    if (n == 0 || n == 1) return n;
    if (result[n - 2] != 0) {
        a = result[n - 2];
    } else {
        result[n - 2] = a = fibonacci(n - 2);
    }
    if (result[n - 1] != 0) {
        b = result[n - 1];
    } else {
        result[n - 1] = b = fibonacci(n - 1);
    }
    return a + b; 
}

int main(void)
{
    int n, answer;
    
    clock_t start, end;

    puts("フィボナッチ数を計算します。");
    printf("正の整数を入力してください: "); scanf("%d", &n);
    start = clock();
    answer = fibonacci(n);
    end = clock();
    printf("フィボナッチの%dは%dです。\n", n, answer);
    printf("処理時間: %lf秒\n", (double)(end - start) / CLOCKS_PER_SEC);
    return 0;
}