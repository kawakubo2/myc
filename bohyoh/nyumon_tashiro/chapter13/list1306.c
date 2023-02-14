#include <stdio.h>

int main(void)
{
    int ch;
    FILE *fp;
    char fname[FILENAME_MAX];

    printf("ファイル名: ");
    fscanf(stdin, "%s", fname);

    if ((fp = fopen(fname, "r")) == NULL) {
        printf("ファイルがオープンできません。");
    } else {
        while ((ch = fgetc(fp)) != EOF) {
            putchar(ch);
        }
        fclose(fp);
    }
    return 0;
}