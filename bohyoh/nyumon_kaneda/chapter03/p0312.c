#include <stdio.h>

int main(void)
{
    int retry;
    do {
        int month;
        printf("月を入力してください: ");
        fscanf(stdin, "%d", &month);
        switch(month) {
            case 3:
            case 4:
            case 5:
                printf("%d月は春です。\n", month);
                break;
            case 6:
            case 7:
            case 8:
                printf("%d月は夏です。\n", month);
                break;
            case 9:
            case 10:
            case 11:
                printf("%d月は秋です。\n", month);
                break;
            case 12:
            case 1:
            case 2:
                printf("%d月は冬です。\n", month);
                break;
            default:
                printf("%d月はありませんよ!!\n", month);
                break;
        }
        printf("もう一度? [Yes---0 / No---9] : ");
        fscanf(stdin, "%d", &retry);
    } while (retry == 0);

    return 0;
}