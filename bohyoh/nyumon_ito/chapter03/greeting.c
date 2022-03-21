#include <stdio.h>

int main(void)
{
    int hour;
    printf("時刻を入力してください(0-23): "); scanf("%d", &hour);

    puts("-----< 解法1 >-----");
    if (hour >= 0 && hour <= 11) {
        puts("おはようございます。");
    } else if (hour == 12) {
        puts("お昼です。");
    } else if (hour >= 13 && hour <= 18) {
        puts("こんにちは。");
    } else if (hour >= 19 && hour <= 23) {
        puts("こんばんは。");
    } else {
        puts("時刻の範囲を超えています。");
    }

    puts("------< 解法2 >------");
    if (hour < 0 || hour > 23) {
        puts("時刻の範囲を超えています。");
    } else if (hour <= 11) {
        puts("おはようございます。");
    } else if (hour == 12) {
        puts("お昼です。");
    } else if (hour <= 18) {
        puts("こんにちは。");
    } else {
        puts("こんばんは。");
    }

    puts("------< 解法3 >-----");
    if (hour < 0 || hour > 23) {
        puts("時刻の範囲を超えています。");
    } else if (hour >= 19) {
        puts("こんばんは。");
    } else if (hour >= 13) {
        puts("こんにちは。");
    } else if (hour == 12) {
        puts("お昼です。");
    } else {
        puts("おはようございます。");
    }

    return 0;
}