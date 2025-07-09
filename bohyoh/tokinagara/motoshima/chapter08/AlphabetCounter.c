#include <stdio.h>
#include <sys/time.h>

int main()
{
    struct timeval start_time, end_time;
    gettimeofday(&start_time, NULL);

    int size = (int)'z' + 1;
    int counter[size];
    for (int i = 0; i < size; i++) {
        counter[i] = 0;
    }
    int c;
    while ((c = getchar()) != EOF) {
        if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') {
            counter[(int)c]++;
        }
    }
    gettimeofday(&end_time, NULL);

    for (int i = 0; i < size; i++) {
        char c = (char)i;
        if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') {
            printf("%c: %d\n", c, counter[(int)c]);
        }
    }

    printf("処理時間: %ldミリ秒\n", (end_time.tv_sec - start_time.tv_sec) * 1000 + (end_time.tv_usec - start_time.tv_usec) / 1000);

    return 0;
}