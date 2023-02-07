#include <stdio.h>
#include "mystdio.h"

int main(void);

int main(void)
{
    char filename[FILENAME_MAX];
    
    printf("ファイルを表示するプログラム\n");
    printf("ファイル名を入力してください。\n");
    get_line(filename, FILENAME_MAX);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("ファイル %s がオープンできませんでした。\n", filename);
        return -1;
    }
    int c;
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    if (fclose(fp)) {
        printf("ファイル %s のクローズでエラーが起きました。\n", filename);
        return -1;
    }

    return 0;
}