#include <stdio.h>

int main(void)
{
    double numbers[] = {
        1.2352385723875,
        42.98147509358938,
        -15.49478147,
        120.89329787771875,
        -5.4817950016847,
        23.89271077288748021,
        17.1531087300358,
        5.18396071556599,
        3.189817780577108547,
        -43.00185767581957913
    };
    printf("ファイルへ保存する前\n");
    for (int i = 0; i < 10; i++) {
        printf("%23.21f\n", numbers[i]);
    }
    FILE *fp;
    if ((fp = fopen("num_array.bin", "wb")) == NULL) {
        printf("ファイルをオープンできません。\n");
        return -1;
    }
    fwrite(numbers, sizeof(double), 10, fp);
    if (fclose(fp)) {
        printf("ファイルのクローズに失敗しました。\n");
        return -1;
    }

    printf("ファイルから読み込んだ後\n");
    if ((fp = fopen("num_array.bin", "rb")) == NULL) {
        printf("ファイルをオープンできません。\n");
        return -1;
    }
    fread(numbers, sizeof(double), 10, fp);
    if (fclose(fp)) {
        printf("ファイルのクローズに失敗しました。\n");
        return -1;
    }
    for (int i = 0; i < 10; i++) {
        printf("%23.21f\n", numbers[i]);
    }
    return 0;
}