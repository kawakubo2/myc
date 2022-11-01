#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char buffer[256];
    int time;
    printf("時刻を入力してください: ");
    fgets(buffer, 256, stdin);
    time = atoi(buffer);

    puts("---< 解法1 >---");
    if (time >= 0 && time <= 11) {
        puts("おはようございます。");
    } else if (time == 12) {
        puts("お昼です。");
    } else if (time >= 13 && time <= 18) {
        puts("こんにちは。");
    } else if (time >= 19 && time <= 23) {
        puts("こんばんは。");
    } else {
        puts("時刻の範囲を超えています。");
    }

    puts("---< 解法2 >---");
    if (time < 0 || time > 23) {
        puts("時刻の範囲を超えています。");
    } else if (time <= 11) {
        puts("おはようございます。");
    } else if (time == 12) {
        puts("お昼です。");
    } else if (time <= 18) {
        puts("こんにちは。");
    } else {
        puts("こんばんは。");
    }

    puts("---< 解法3 >---");
    if (time < 0 || time > 23) {
        puts("時刻の範囲を超えています。");
    } else if (time >= 19) {
        puts("こんばんは。");
    } else if (time >= 13) {
        puts("こんにちは。");
    } else if (time == 12) {
        puts("お昼です。");
    } else {
        puts("おはようございます。");
    }

    return 0;
}