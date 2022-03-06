#include <stdio.h>
#include <time.h>

int alpha_counter(int *counter, int size, char *filename)
{
    int i, ch;
    FILE *fp;

    if ((fp = fopen(filename, "r")) == NULL) {
        printf("ファイルをオープンできません。\n");
        return 0;
    } else {
        while ((ch = fgetc(fp)) != EOF) {
            if ((char)ch >= 'A' && (char)ch <= 'Z' ||\
                (char)ch >= 'a' && (char)ch <= 'z') {
                counter[ch] += 1;
            }
        }
    }
    return 1;
}

int main(void)
{
    clock_t start, end;
    start = clock();
    int i;
    int counter[128] = {0};
    char filename[FILENAME_MAX];
    printf("ファイル名を入力してください : ");
    scanf("%s", filename);

    if (alpha_counter(counter, 128, filename)) {
        for (i = 0; i < 128; i++) {
            if ((char)i >= 'A' && (char)i <= 'Z' || (char)i >= 'a' && (char)i <= 'z') {
                printf("%c: %5d\n", (char)i, counter[i]);
            }
        }
    }
    end = clock();
    printf("%.4f\n", (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}


