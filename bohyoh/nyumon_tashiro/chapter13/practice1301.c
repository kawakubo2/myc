#include <stdio.h>

int main(void)
{
    FILE *fp;
    char filename[256];
    printf("ファイル: ");
    fscanf(stdin, "%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("そのファイルは存在しません。\n");
    } else {
        printf("そのファイルは存在します。\n");
        fclose(fp);
    }
}