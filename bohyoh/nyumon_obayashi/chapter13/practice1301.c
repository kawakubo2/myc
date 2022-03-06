#include <stdio.h>

int main(void)
{
    FILE *fp;
    char filename[128];
    printf("ファイル名を入力してください: ");
    scanf("%s", filename);
    
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("%sファイルは存在しません。\n", filename);
    } else {
        printf("%sファイルは存在します。\n", filename);
        fclose(fp);
    }


    return 0;
}