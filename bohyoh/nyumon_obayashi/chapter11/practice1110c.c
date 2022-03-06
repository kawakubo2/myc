#include <stdio.h>

double d_pow(int p) {
    int i;
    double result = 1.0;
    for (i = 0; i < p; i++) {
        result *= 0.1;
    }
    return result;
}

double strtof(const char *nptr)
{
    int i, keta;
    double result = 0;

    while (*nptr) {
        if (*nptr == '.') break;
        result = result * 10 + (*nptr - '0');
        nptr++;
    }

    keta = 1;
    if (*nptr == '.') {
        nptr++;
        while (*nptr) {
            result = result + (d_pow(keta++) * (*nptr - '0'));
            nptr++;
        }
    }

    return result;
}

int main(void)
{
    char str[128];
    double a;

    printf("小数点を入力してください : ");
    scanf("%s", str);

    a = strtof(str);

    printf("%lf * 2 = %lf\n", a, a * 2);
    
    return 0;
}

