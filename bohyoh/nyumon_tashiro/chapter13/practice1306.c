#include <stdio.h>

int main(void)
{
    int ch, line_count = 0;
    FILE *fp;
    char fname[FILENAME_MAX];
    printf("ファイル名: ");
    fscanf(stdin, "%s", fname);

    if ((fp = fopen(fname, "r")) == NULL) {
        printf("ファイルをオープンできません。");
    } else {
        while ((ch = fgetc(fp)) != EOF) {
            if (ch == '\n') {
                line_count++;
            }
        }
        printf("ファイル %s は %d 行存在します。\n", fname, line_count);
        fclose(fp);
    }
    return 0;
}