#include <stdio.h>

int strtoi(const char *nptr)
{
    // "123"
    int result = 0;
    char sign_f = *nptr;
    if (sign_f == '+' || sign_f == '-') nptr++;
    while (*nptr) {
        result = result * 10 + (*nptr - '0');
        nptr++;
    }
    return sign_f == '-' ? -result : result;
}

int main(void)
{
    int a;
    char str[128];
    printf("整数を入力してください : ");
    scanf("%s", str);

    a = strtoi(str);

    printf("%d * 2 = %d\n", a, a * 2);

    return 0;
}

