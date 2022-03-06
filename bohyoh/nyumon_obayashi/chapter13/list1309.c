#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    double pi = 3.141592653589793223846;
    printf("変数 pi から取り出した円周率は%23.21fです。\n", pi);

    if ((fp = fopen("PI.bin", "wb")) == NULL) {
        printf("\aファイルをオープンできません。");
        exit(-1);
    } else {
        fwrite(&pi, sizeof(double), 1, fp);
        fclose(fp);
    }

    if ((fp = fopen("PI.bin", "rb")) == NULL) {
        printf("\aファイルをオープンできません。");
    } else {
        fread(&pi, sizeof(double), 1, fp);
        printf("ファイルから読み取った円周率は%23.21fです。\n", pi);
        fclose(fp);
    }
    return 0;
}
