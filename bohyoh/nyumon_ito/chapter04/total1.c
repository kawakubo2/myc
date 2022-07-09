#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t start_time, end_time;
    start_time = time(NULL);
    int i;
    long total = 0;
    for (i = 317; i <= 1000000000; i += 317) {
        total += i;
    }
    end_time = time(NULL);
    printf("%d～%dまでの%dの倍数の合計: %ld\n", 1, 1000000000, 317, total);
    printf("処理時間: %ld\n", end_time - start_time);

    return 0;

}