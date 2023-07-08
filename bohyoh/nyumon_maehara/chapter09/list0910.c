#include <stdio.h>

void str_dcount(const char s[], int cnt[])
{
    int i = 0;
    while(s[i]) {
        if (s[i] >= '0' && s[i] <= '9') {
            cnt[s[i] - '0']++;
        }
        i++;
    }
}

int main(void)
{
    char s[255];
    int counter[10] = {0};
    puts("数字文字をそれぞれカウントします。");
    printf("文字列: "); fscanf(stdin, "%s", s);

    str_dcount(s, counter);

    puts("数字文字の出現回数");
    for (int i = 0; i < 10; i++) {
        printf("'%d': %d\n", i, counter[i]);
    }

    return 0;
}