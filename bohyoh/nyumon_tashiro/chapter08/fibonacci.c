#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BUFFER_SIZE 256

static long long fibonacci_ary[100];

long long fibonacci(int n)
{
    if (n == 0 || n == 1) return n;
    if (fibonacci_ary[n - 2] == -1) {
        fibonacci_ary[n - 2] = fibonacci(n - 2);
    }
    if (fibonacci_ary[n - 1] == -1) {
        fibonacci_ary[n - 1] = fibonacci(n - 1);
    }
    return fibonacci_ary[n - 2] + fibonacci_ary[n - 1];
}

int main(void)
{
    time_t start, end;
    start = time(NULL);
    for (int i = 0; i < 100; i++) {
        fibonacci_ary[i] = -1;
    } 
    fibonacci_ary[0] = 0;
    fibonacci_ary[1] = 1;
    int n;
    printf("正の整数: ");
    char buffer[BUFFER_SIZE];
    fgets(buffer, BUFFER_SIZE, stdin);
    n = atoi(buffer);

    printf("フィボナッチの%dは%lldです。\n", n, fibonacci(n));
    end = time(NULL);
    printf("処理時間:%ld\n", (end - start));

    return 0;
}