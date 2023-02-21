#include <stdio.h>
#include <string.h>
#include "mystdio.h"

int main(int argc, char *argv[]);

int main(int argc, char *argv[])
{
    printf("ファイルをコピーするプログラム\n");
    if (argc != 3) {
        printf("使用法: %s FILE1 FILE2\n",argv[0]);
        printf("FILE1 の内容を FILE2 にコピーします。\n");
        return -1;
    }

    char *fromfile = argv[1];
    char *tofile = argv[2];

    if (strcmp(fromfile, tofile) == 0) {
        printf("コピー元とコピー先のファイル名が同じです。コピー先の内容が消去されるの回避するため、処理を中止します。\n");
        return -1;
    }

    FILE *fromfp = fopen(fromfile, "rb");
    if (fromfp == NULL) {
        printf("ファイル %s がオープンできません。\n", fromfile);
        return -1;
    }

    FILE *tofp = fopen(tofile, "wb");
    if (tofp == NULL) {
        printf("ファイル %s がオープンできません。\n", tofile);
        return -1;
    }

    int c;
    while ((c = fgetc(fromfp)) != EOF) {
        fputc(c, tofp);
    }

    if (fclose(tofp)) {
        printf("ファイル %s のクローズでエラーが発生しました。\n", tofile);
        fclose(fromfp);
        return -1;
    }

    if (fclose(fromfp)) {
        printf("ファイル %s のクローズでエラーが発生しました。\n", fromfile);
        return -1;
    }
    return 0;
}