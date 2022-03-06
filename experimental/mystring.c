#include <stdio.h>

#define EN 0
#define JA 1

char *get_week_day_name(int wd, int lang)
{
    if (lang != EN && lang != JA) lang = EN;
    char *s[2][7] = {
        {"Su", "Mo", "Tu", "We", "Th", "Fr", "Sa" },
        {"日", "月", "火", "水", "木", "金", "土" }
    };
    return s[lang][wd];
}

int main(void)
{
    int n, lang;
    puts("0～6の数値を入力して下さい。対する曜日を返します");
    printf("言語を選択して下さい(0.英語 1.日本語) : ");
    scanf("%d", &lang);
    printf("0-6の数値: "); scanf("%d", &n); 
    printf("%s\n", get_week_day_name(n, lang));

    return 0;
}

