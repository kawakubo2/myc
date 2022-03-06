#include <stdio.h>

#define NUMBER  (32)

void str_reverse(char *s, int size)
{
    int i;
    for (i = 0; i < size / 2; i++) {
        int temp = s[i];
        s[i] = s[size - 1 - i];
        s[size - 1 - i] = temp;
    }
}

int cardconv(int card, int num, char *result)
{
    int size = 0;
    char numchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while (num) {
        result[size++] = numchar[num % card];
        num /= card;
    }
    return size;
}

int main(void)
{
    int n, m, card, size;
    char result[NUMBER];

    puts("10進数から2～36進数へ変換します。");
    do {
        printf("基数を2～36で入力してください : ");
        scanf("%d", &card);
    } while (card < 2 || card > 36);

    do {
        printf("正数を入力してください : ");
        scanf("%d", &n);
    } while (n < 0);

    size = cardconv(card, n, result);
    str_reverse(result, size);

    printf("%s\n", result);

    return 0;
}
    
