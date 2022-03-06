#include <stdio.h>

int num_counter(int *counter, int size, char *filename)
{
    int i, ch;
    FILE *fp;

    if ((fp = fopen(filename, "r")) == NULL) {
        printf("ファイルをオープンできません。\n");
        return -1;
    } else {
        for (i = 0; i < size; i++) {
            counter[i] = 0;
        }
        while ((ch = fgetc(fp)) != EOF) {
            if ((char)ch >= '0' && (char)ch <= '9') {
                counter[ch - '0'] += 1;
            }
        }
    }
    return 0;
}

int main(void)
{
    int i;
    int counter[10] = {0};
    char filename[FILENAME_MAX];
    printf("ファイル名を入力してください : ");
    scanf("%s", filename);

    if (num_counter(counter, 10, filename) == 0) {
        for (i = 0; i < 10; i++) {
            printf("%c: %4d\n", '0' + i , counter[i]);
        }
    }

    return 0;
}


