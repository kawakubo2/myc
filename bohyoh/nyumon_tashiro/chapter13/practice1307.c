#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch, digit_count = 0;
    FILE *fp;
    char fname[FILENAME_MAX];
    printf("ファイル名: ");
    fscanf(stdin, "%s", fname);

    if ((fp = fopen(fname, "r")) == NULL) {
        printf("ファイルをオープンできません。");
    } else {
        while ((ch = fgetc(fp)) != EOF) {
            // if (isdigit(ch)) {
            if (ch >= '0' && ch <= '9') {
                digit_count++;
            }
        }
        printf("ファイル %s の中に数字文字は %d 個存在します。\n", fname, digit_count);
        fclose(fp);
    }
    return 0;
}