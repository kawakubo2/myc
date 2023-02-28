#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    FILE *sfp;
    FILE *dfp;
    char sname[FILENAME_MAX];
    char dname[FILENAME_MAX];
    unsigned char buffer[16];

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
    while ((n = fread(buffer, sizeof(unsigned char), 16, sfp)) > 0) {
        fwrite(buffer, sizeof(unsigned char), n, dfp);
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