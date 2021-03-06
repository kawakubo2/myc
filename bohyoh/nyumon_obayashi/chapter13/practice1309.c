#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch;
    FILE *sfp;
    FILE *dfp;
    char sname[FILENAME_MAX];
    char dname[FILENAME_MAX];

    printf("コピー元ファイル名 : "); scanf("%s", sname);
    printf("コピー先ファイル名 : "); scanf("%s", dname);

    if ((sfp = fopen(sname, "r")) == NULL) {
        printf("\aコピー元ファイルをオープンできません。\n");
    } else {
        if ((dfp = fopen(dname, "w")) == NULL) {
            printf("\aコピー先ファイルをオープンできません。\n");
        } else {
            while ((ch = fgetc(sfp)) != EOF) {
                fputc(toupper(ch), dfp);
            }
            fclose(dfp);
        }
        fclose(sfp);
    }
    return 0;
}