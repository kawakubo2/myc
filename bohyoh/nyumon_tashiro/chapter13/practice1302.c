#include <stdio.h>

int main(void)
{
    FILE *fp;
    char filename[256];
    printf("ファイル: ");
    fscanf(stdin, "%s", filename);
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("ファイルがオープンできません。\n");
    } else {
        printf("ファイルをオープンしました。\n");
        fclose(fp);
    }
}