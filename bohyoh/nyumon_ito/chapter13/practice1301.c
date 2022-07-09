#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char filename[128];
    while (1) {
        printf("ファイル名(終了時はq): ");
        scanf("%s", filename);
        if (strcmp(filename, "q") == 0) break;
        fp = fopen(filename, "r");
        if (fp == NULL) {
            puts("ファイルがオープンできません。");
        } else {
            printf("ファイル\"%s\"をオープンしました。\n", filename);
            fclose(fp);
        }
    }
    return 0;
}