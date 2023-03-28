#include <stdio.h>

void greet(int hour);

int main(void)
{
    int hour;
    for (hour = -1; hour <= 24; hour++) {
        printf("---< %d時 >---\n", hour);
        greet(hour);
    }
    return 0;
}

void greet(int hour)
{
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