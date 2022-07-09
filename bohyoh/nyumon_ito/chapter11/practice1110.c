#include <stdio.h>

int strtoi(const char *nptr)
{
    int result = 0;
    while (*nptr) {
        result = result * 10 + (*nptr - '0');
        nptr++;
    }
    return result;
}

double my_pow(double x, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        x /= 10;
    }
    return x; 
}

double strtof(const char *nptr)
{
    int int_part = 0;
    double float_part = 0;
    while (*nptr) {
        if (*nptr == '.') {
            break;
        }
        int_part = int_part * 10 + (*nptr - '0');
        nptr++;
    }
    if (*nptr == '.') {
        nptr++;
        int i = 1;
        while (*nptr) {
            float_part += my_pow(*nptr - '0', i);
            i++;
            nptr++;
        }
    }
    return int_part + float_part;
}

int main(void)
{
    int n;
    double x;
    char str[128];

    puts("文字列から整数");
    printf("文字列: ");
    scanf("%s", str);

    n = strtoi(str);
    printf("%d * 10 = %d\n", n, n * 10);

    puts("文字列から小数点");
    printf("文字列: ");
    scanf("%s", str);

    x = strtof(str);
    printf("%lf * 10 = %lf\n", x, x * 10);

    return 0;
}