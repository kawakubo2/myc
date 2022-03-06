#include <stdio.h>

int main(void)
{
    FILE *fp;
    char filename[128];

    printf("中身を消去したいファイル名を入力してください: ");
    scanf("%s", filename);

    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("「%s」はオープンできません。\n", filename);
    } else {
        printf("「%s」の中を消去しました。\n", filename);
        fclose(fp);
    }

    return 0;    
}