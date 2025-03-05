#include <stdio.h>

/*
時刻に応じて挨拶を返す

午前( 0 -- 11) --- おはようございます。
正午(12      ) --- お昼です。
午後(13 -- 18) --- こんにちは。
夜  (19 -- 23)---- こんばんは。
上記以外      ---- 時刻の範囲を超えています。
*/

int main(void)
{
    for (int hour = -1; hour <= 24; hour++) {
        printf("[%02d]\n", hour);
        puts("--- パターン1(範囲を指定する) ---");
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

        puts("--- パターン2(最初の条件式でエラーをチェックする)");
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
    }

    return 0;
}