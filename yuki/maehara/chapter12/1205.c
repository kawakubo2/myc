#include <stdio.h>
#include <string.h>
#include "mystdio.h"

#define BUFFER_SIZE 512

int main(int argc, char *argv[]);

int main(int argc, char *argv[])
{
    printf("ファイルをコピーするプログラム\n");
    if (argc != 3) {
        printf("使用法: %s FILE1 FILE2\n",argv[0]);
        printf("FILE1 の内容を FILE2 にコピーします。\n");
        return -1;
    }

    char *infile = argv[1];
    char *outfile = argv[2];

    if (strcmp(infile, outfile) == 0) {
        printf("コピー元とコピー先のファイル名が同じです。コピー先の内容が消去されるの回避するため、処理を中止します。\n");
        return -1;
    }

    FILE *infp = fopen(infile, "rb");
    if (infp == NULL) {
        printf("ファイル %s がオープンできません。\n", infile);
        return -1;
    }

    FILE *outfp = fopen(outfile, "wb");
    if (outfp == NULL) {
        printf("ファイル %s がオープンできません。\n", outfile);
        return -1;
    }

    long linenumber = 1L;
    char buffer[BUFFER_SIZE];
    while (fgets(buffer, BUFFER_SIZE, infp) != NULL) {
        fprintf(outfp, "%08ld: %s", linenumber, buffer);
        linenumber++;
    }

    if (fclose(outfp)) {
        printf("ファイル %s のクローズでエラーが発生しました。\n", outfile);
        fclose(infp);
        return -1;
    }

    if (fclose(infp)) {
        printf("ファイル %s のクローズでエラーが発生しました。\n", infile);
        return -1;
    }
    return 0;
}