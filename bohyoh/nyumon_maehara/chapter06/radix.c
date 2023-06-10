#include <stdio.h>

void str_reverse(char s[64], int size)
{
    for (int i = 0; i < size / 2; i++) {
        int tmp = s[i];
        s[i] = s[size - 1 - i];
        s[size - 1 - i] = tmp;
    }
    s[size] = '\0';
}

void myradix(int digit, int radix, char result[64])
{
    char s[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int mod;
    int count = 0;
    while(digit > 0) {
        mod = digit % radix;
        result[count++] = s[mod];
        digit /= radix;
    }
    str_reverse(result, count);
}

int main(void)
{
    int digit, radix;
    char radix_str[64];
    puts("10進数を2～36進数へ変換します");
    printf("10進数を入力してください: "); fscanf(stdin, "%d", &digit);
    printf("基数を2～36の範囲で入力してください: "); fscanf(stdin, "%d", &radix);

    myradix(digit, radix, radix_str);
    printf("%dを%d進数に変換すると\"%s\"\n", digit, radix, radix_str);

    return 0;
}