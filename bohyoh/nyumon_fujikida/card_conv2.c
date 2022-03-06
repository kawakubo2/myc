#include <stdio.h>

static char cnum[36] = "0123456789abcedfghijklmnopqrstuvwxyz";

int char2card(char c)
{
    int i;
    for (i = 0; i < 36; i++)
        if (c == cnum[i])
            return i;
}

long card_conv10(char *num, int card)
{
    long result = 0;
    while (*num)
        result = result * card + char2card(*num++);
    return result;
}

int main(void)
{
    long n;
    int card;
    char str[128];
    do {
        printf("入力する基数を2～36で入力してください : ");
        scanf("%d", &card);
    } while (card < 2 || card > 36);

    printf("整数リテラルを入力してください(例:16進数-> ff) : ");
    scanf("%s", str);

    n = card_conv10(str, card);

    printf("%ld\n", n);

    return 0;
}
    
