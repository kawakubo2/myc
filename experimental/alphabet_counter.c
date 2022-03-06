#include <stdio.h>
#include <time.h>

#define N 128

int main(void)
{
    clock_t start, end;
    start = clock();
    int i, ch;
    int counter[N] = {0};
    char filename[] = "counter_test.txt";
    FILE *fp;

    if ((fp = fopen(filename, "r")) == NULL) {
        printf("ファイルをオープンできません。\n");
        return -1;
    } else {
        while ((ch = fgetc(fp)) != EOF) {
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                counter[ch] += 1;
            }
        }
    }

    for (i = 0; i < N; i++) {
        if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z')) {
            printf("%c: %5d\n", i, counter[i]);
        }
    }
        
    end = clock();
    printf("%.6f秒\n", ((double)end - start) / CLOCKS_PER_SEC);

    return 0;
}


