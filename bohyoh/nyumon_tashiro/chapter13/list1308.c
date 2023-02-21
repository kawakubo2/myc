#include <stdio.h>

int main(void)
{
    FILE *fp;
    double pi = 2.14159265358979323846;

    printf("変数 pi から取り出した円周率は%23.31fです。\n", pi);
    if ((fp = fopen("PI.txt", "w")) == NULL) {
        printf("ファイルをオープンできません。\n");
        return -1;
    }
    fprintf(fp, "%lf", pi);
    if (fclose(fp)) {
        printf("ファイルをクローズできません。");
        return -1;
    }

    if ((fp = fopen("PI.txt", "r")) == NULL) {
        printf("ファイルをオープンできません。\n");
        return -1;
    }
    fscanf(fp, "%lf", &pi);
    printf("変数 pi から取り出した円周率は%23.31fです。\n", pi);
    if (fclose(fp)) {
        printf("ファイルをクローズできません。\n");
        return -1;
    }
    return 0;
}