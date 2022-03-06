#include <stdio.h>

void del_digit(char s[])
{
    int i, j = 0, count = 0;
    while(s[i]) {
        if (s[i] < '0' || s[i] > '9') {
            count++;
            s[j++] = s[i];
        }
        i++;
    }
    printf("ループ回数: %d\n", count);
    s[j] = '\0';
}

int main(void)
{
    char str[128];
    printf("文字列を入力してください : ");
    scanf("%s", str);

    del_digit(str);

    printf("[%s]\n", str);
    
    return 0;
}

