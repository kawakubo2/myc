#include <stdio.h>

int main(void)
{
    int year;
    printf("年を入力してください: ");
    fscanf(stdin, "%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        printf("%d年はうるう年です。\n", year);
    } else {
        printf("%d年はうるう年ではありません。\n", year);
    }

    return 0;
}