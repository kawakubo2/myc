#include <stdio.h>

int main(void);

int main(void)
{
    int n;

    printf("降水確率を入力してください: ");
    fscanf(stdin, "%d", &n);
    printf("降水確率は %d %%です。\n", n);
    if (n >= 50) {
        printf("傘を忘れずにね。\n");
    } else {
        printf("傘はいりません。\n");
    }
    printf("いってらっしゃい。\n");

    return 0;
}