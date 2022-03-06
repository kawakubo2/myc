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
    int i;
    int dcnt[10] = {0};
    char str[128];

    printf("文字列を入力してください:");
    scanf("%s", str);

    str_dcount(str, dcnt);

    puts("数字文字の出現回数");
    for (i = 0; i < 10; i++) {
        printf("'%d' : %d\n", i, dcnt[i]);
    }

    return 0;
}
                
