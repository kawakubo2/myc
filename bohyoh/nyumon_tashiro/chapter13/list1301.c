#include <stdio.h>

int main(void)
{
    FILE *fp;
    fp = fopen("list1301.c", "r");
    if (fp == NULL) {
        printf("\aファイル\"abc\"をオープンできませんでした。\n");
    } else {
        printf("\aファイル\"abc\"をオープンしました。\n");
        fclose(fp);
    }
    return 0;
}