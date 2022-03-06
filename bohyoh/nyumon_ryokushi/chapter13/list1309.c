#include <stdio.h>

#define NUMBER 3

int main(void)
{
    FILE *fp;
    double d[] =  { 1.23456789012345678901234567890,
                    4.56789012345678901234567890123,
                    7.89012345678901234567890123456 };
                    
    printf("ハードコーディングしたデータ:\n");
    for (int i = 0; i < NUMBER; i++) {
        printf("%23.21f\n", d[i]);
    }

    /* 書きこみ */
    puts("バイナリデータの書き込み");
    if ((fp = fopen("PI.bin", "wb")) == NULL) {
        printf("\aファイルをオープンできません。\n");
    } else {
        fwrite(d, sizeof(double), NUMBER, fp);
        fclose(fp);
    }

    /* 読み込み */
    puts("バイナリデータの読み込み");
    if ((fp = fopen("PI.bin", "rb")) == NULL) {
        printf("\aファイルをオープンできません。\n");
    } else {
        fread(&d, sizeof(double), NUMBER, fp);
        printf("ファイルから読み取った値は:\n");
        for (int i = 0; i < NUMBER; i++) {
            printf("%23.21f\n", d[i]);
        }
        fclose(fp);
    }

    return 0;
}