#include <stdio.h>

int main(void)
{
    int ch;
    FILE *fp;
    char fname[FILENAME_MAX];

    printf("ファイル名 : ");
    scanf("%s", fname);

    if ((fp = fopen(fname, "r")) == NULL) {
        printf("\aファイルをオープンできませんでした。\n");
    } else {
        while ((ch = fgetc(fp)) != EOF) {
            putchar(ch);
        }
        fclose(fp);
    }
    return 0;
}

