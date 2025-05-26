#include <stdio.h>
#include <limits.h>

/*
"123" -> 123
0 + 1 -> 1
10 + 2 -> 12
120 + 3 -> 123
*/
int myatoi(const char *s)
{
    int flag = 0;
    if (*s == '+') s++;
    if (*s == '-') {
        flag = 1;
        s++;
    }
    int result = 0;
    while(*s) {
        result = result * 10 + (*s - '0');
        s++;
    }
    return flag ? -result: result;
}

long myatol(const char *s)
{
    int flag = 0;
    if (*s == '+') s++;
    if (*s == '-') {
        flag = 1;
        s++;
    }
    long result = 0;
    while (*s)
    {
        result = result * 10 + (*s - '0');
        s++;
    }
    return flag ? -result : result; 
}

int powdigit(int p)
{
    int result = 1;
    for (int i = 0; i < p; i++) {
        result *= 10;
    }
    return result;
}
double myatof(const char *s)
{
    int flag = 0;
    if (*s == '+') s++;
    if (*s == '-') {
        flag = 1;
        s++;
    }
    double result = 0;
    while (*s)
    {
        if (*s == '.') break;
        result = result * 10 + (*s - '0');
        s++;
    }
    if (*s == '.') {
        s++;
        int f = 1;
        while(*s) {
            result = result + (double)(*s - '0') * (1.0 / powdigit(f));
            f++;
            s++;
        }
    }
    return flag ? -result : result;
}

int main(void)
{
    char str1[128];
    printf("数字文字: ");
    scanf("%s", str1); // &str[0
    int ans = myatoi(str1);
    printf("整数値(int): %d\n", ans);

    char str2[128];
    printf("数字文字: ");
    scanf("%s", str2);

    long ans2 = myatol(str2);
    printf("整数値(long): %ld\n", ans2);
    // printf("整数値(max) : %ld\n", LONG_MAX);

    char str3[128];
    printf("数字文字: ");
    scanf("%s", str3);
    double ans3 = myatof(str3);
    printf("浮動小数点(double): %lf\n", ans3);
    // printf("整数値(max) : %ld\n", LONG_MAX);

    return 0;
}