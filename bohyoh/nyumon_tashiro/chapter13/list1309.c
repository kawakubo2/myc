#include <stdio.h>

int main(void)
{
    FILE *fp;
    double pi = 2.14159265358979323846;

    printf("変数 pi から取り出した円周率は%23.21fです。\n", pi);
    if ((fp = fopen("PI.bin", "wb")) == NULL) {
        printf("ファイルをオープンできません。\n");
        return -1;
    }
    fwrite(&pi, sizeof(double), 1, fp);
    if (fclose(fp)) {
        printf("ファイルをクローズできません。");
        return -1;
    }

    if ((fp = fopen("PI.bin", "rb")) == NULL) {
        printf("ファイルをオープンできません。\n");
        return -1;
    }
    fread(&pi, sizeof(double), 1, fp);
    printf("変数 pi から取り出した円周率は%23.21fです。\n", pi);
    if (fclose(fp)) {
        printf("ファイルをクローズできません。\n");
        return -1;
    }
    return 0;
}