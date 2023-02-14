#include <stdio.h>
#include <string.h>
#include "mystdio.h"

int main(void)
{
    printf("ファイルをコピーするプログラム\n");

    printf("コピー元のファイル名を入力してください。\n");
    char fromfile[FILENAME_MAX];
    get_line(fromfile, FILENAME_MAX);
    FILE *fromfp = fopen(fromfile, "rb");
    if (fromfp == NULL) {
        printf("ファイル %s がオープンできません。\n", fromfile);
        return -1;
    }

    printf("コピー先のファファイル名を入力してください。\n");
    char tofile[FILENAME_MAX];
    get_line(tofile, FILENAME_MAX);
    
    if (strcmp(fromfile, tofile) == 0) {
        printf("コピー元とコピー先のファイル名が同じです。コピー先の内容が消去されるの回避するため、処理を中止します。\n");
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