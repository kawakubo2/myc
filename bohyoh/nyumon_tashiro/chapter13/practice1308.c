#include <stdio.h>
#include <string.h>

int main(void)
{
    int ch;
    FILE *sfp;
    FILE *dfp;
    char sname[FILENAME_MAX];
    char dname[FILENAME_MAX];

    printf("コピー元ファイル名: "); fscanf(stdin, "%s", sname);
    printf("コピー先ファイル名: "); fscanf(stdin, "%s", dname);
    if (strcmp(sname, dname) == 0) {
        printf("コピー先とコピー先のファイル名が同じです。ファイルの中身が削除されるので、処理を中止します。\n");
        return -1;
    }

    if ((sfp = fopen(sname, "r")) == NULL) {
        printf("コピー元ファイルをオープンできません。\n");
        return -1;
    }
    if ((dfp = fopen(dname, "w")) == NULL) {
        printf("コピー先ファイルをオープンできません。\n");
        return -1;
    }
    while ((ch = fgetc(sfp)) != EOF) {
        fputc(ch, dfp);
        putchar(ch);
    }
    if (fclose(sfp)) {
        printf("コピー元のファイルのクローズでエラーが発生しました。\n");
        fclose(dfp);
        return -1;
    }
    if (fclose(dfp)) {
        printf("コピーのファイルのクローズでエラーが発生しました。\n");
        return -1;
    }
    return 0;
}