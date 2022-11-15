#include <stdio.h>

int str_chnum(const char s[], int c)
{
    int count = 0, i = 0;
    while(s[i]) {
        if (s[i] == c) count++;
        i++;
    }
    return count;
}

int main(void)
{
    char str[][128] = {
        "korekaranokoto", "kokohadoko", "sosokassisonoda", "abcdef"
    };
    char target = 'o';
    for (int i = 0; i < 3; i++) {
        printf("\"%s\"の中に\'%c\'は%d個あります。\n", str[i], target, str_chnum(str[i], target));
    }
}