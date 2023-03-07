#include <stdio.h>
#include <time.h>
#include "HashSet.h"

#define HASH_SIZE  1000000
#define SET_SIZE   1000000

int main(void)
{
    int i;
    HashSet s1, s2, temp;
    Initialize(&s1, HASH_SIZE); Initialize(&s2, HASH_SIZE); Initialize(&temp, HASH_SIZE);

    /*
     * s1は2の倍数, s2は3の倍数を持ったSet
     * 要素数は両方とも1_000_000件とする
     */
    int n = 2, m = 3;
    for (i = 0; i < SET_SIZE; i++) {
        Add(&s1, n); Add(&s2, m);
        n += 2; m += 3;
    }

    clock_t start, end;

    printf("---< s1とs2の積集合 >---\n");
    start = clock();
    Intersection(&temp, &s1, &s2);
    end = clock();
    printf("処理時間: %.3f\n", (double)(end - start) / CLOCKS_PER_SEC);
    printf("積集合の要素数: %d\n", Size(&temp));

    printf("---< s1とs2の和集合 >---\n");
    Terminate(&temp);
    Initialize(&temp, HASH_SIZE);
    start = clock();
    Union(&temp, &s1, &s2);
    end = clock();
    printf("処理時間: %.3f\n", (double)(end - start) / CLOCKS_PER_SEC);
    printf("和集合の要素数: %d\n", Size(&temp));

    printf("---< s1とs2の差集合 >---\n");
    Terminate(&temp);
    Initialize(&temp, HASH_SIZE);
    start = clock();
    Difference(&temp, &s1, &s2);
    end = clock();
    printf("処理時間: %.3f\n", (double)(end - start) / CLOCKS_PER_SEC);
    printf("差集合の要素数: %d\n", Size(&temp));

    return 1;
}