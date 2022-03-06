#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 128

void alpha_counter(int *, char *);

void alpha_counter(int *counter, char *filename)
{
    FILE *fp;
    char ch;
    if ((fp = fopen(filename, "r")) == NULL) {
        printf("\aファイルをオープンできません。\n");
        exit(EXIT_FAILURE);
    } else {
        while ((ch = fgetc(fp)) != EOF) {
            counter[ch]++;
        }
        fclose(fp);
    }
}

int main(void)
{
    clock_t start, end;
    start = clock();
    int i;
    int counter[N] = {0};
    char filename[] = "counter_test.txt";

    alpha_counter(counter, filename);
    for (i = 0; i < N; i++) {
        printf("%c: %5d\n", i, counter[i]);
    }
    end = clock();
    printf("%.6f秒\n", ((double)end - start) / CLOCKS_PER_SEC);

    return 0;
}


