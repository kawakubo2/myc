#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    printf("16進数ダンププログラム\n");
    if (argc != 2) {
        printf("使用法: %s ファイル名\n", argv[0]);
        return -1;
    }
    char *filename = argv[1];

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("ファイル %s が見つかりません。\n", filename);
        return -1;
    }

    long offset = 0L;
    int c;
    while ((c = fgetc(fp)) != EOF) {
        offset++;
        if (offset % 8 == 0 && offset % 16 != 0) {
            printf("-");
        } else {
            printf(" ");
        }
        if (offset % 16 == 0) {
            printf("\n");
            printf("%08lX : ", offset);
        }
        printf("%02X", (unsigned char)c);
    }
    printf("\n");
    if (fclose(fp)) {
        printf("ファイルをクローズできませんでした。\n");
        return -1;
    }
    return 0;
}