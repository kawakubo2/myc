#include <stdio.h>

int main(void)
{
    int n;
    unsigned char buf[16];
    FILE *sfp;
    FILE *dfp;
    char sfname[FILENAME_MAX];
    char dfname[FILENAME_MAX];

    printf("コピー元ファイル名: ");
    scanf("%s", sfname);
    printf("コピー先ファイル名: ");
    scanf("%s", dfname);

    if ((sfp = fopen(sfname, "rb")) == NULL) {
        printf("\aファイルをオープンできません。\n");
    } else {
        if ((dfp = fopen(dfname, "wb")) == NULL) {
            printf("\aファイルをオープンできません。\n");
        } else  {
            while ((n = fread(buf, 1, 16, sfp)) > 0) {
                fwrite(buf, 1, n, dfp);
            }
            fclose(dfp);
        }
        fclose(sfp);
    }
    return 0;
}