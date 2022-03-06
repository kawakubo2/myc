#include <stdio.h>
#include <time.h>

#define MAX 100000000
#define START_NUM 2

static int primes[MAX + 1] = {0};

void prime_numbers()
{
    int i, j;
    for(i = START_NUM; i <= MAX; i++) {
        if (!primes[i]) {
            for (j = i + i; j <= MAX; j += i) {
                primes[j] = 1;
            }
        }
    }
}

int main(void)
{
    clock_t start_clock, end_clock;
    start_clock = clock();
    int i;
    prime_numbers();
    for (i = START_NUM; i <= MAX; i++) {
        if (!primes[i]) {
            // printf("%d ", i);
        }
    }
    putchar('\n');
    end_clock = clock();
    printf("CPU時間: %f\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    return 0;
}