#include <stdio.h>
#include <stdlib.h>

int strtoi(const char* nptr)
{
    int result = 0;
    int plus = 1;
    if (*nptr == '-') {
        plus = 0;
        nptr++;
    } else if (*nptr == '+') {
        nptr++;
    }
    while(*nptr) {
        if (*nptr < '0' || *nptr > '9') {
            printf("エラー:整数値に変換できない文字が存在します。\n");
            exit(1);
        }
        result = result * 10 + (*nptr - '0');
        nptr++;
    }
    return plus ? result: -result;
}

double mypow(int n)
{
    int i = 0;
    double result = 1.0;
    for (i = 0; i < n; i++) {
        result *= 0.1;
    }
    return result;
}

double mystrtof(const char *nptr)
{
    double int_total = 0;
    double point_total = 0;
    double total = 0;
    int plus = 1;
    if (*nptr == '-') {
        plus = 0;
        nptr++;
    } else if (*nptr == '+') {
        nptr++;
    }

    int point_part = 0;
    int point_count = 0;
    while(*nptr) {
        if (*nptr == '.') {
            point_part = 1;
            nptr++;
            continue;
        }
        if (*nptr < '0' || *nptr > '9') {
            printf("エラー:整数値に変換できない文字が存在します。\n");
            exit(1);
        }
        if (point_part) {
            point_count++;
            point_total = point_total + (*nptr - '0') * mypow(point_count);
        } else {
            int_total = int_total * 10 + (*nptr - '0');
        } 
        nptr++;
    }
    total = int_total + point_total;
    return plus ? total : -total;
}

int main(void)
{
    char str[32];
    printf("整数文字列: ");
    fscanf(stdin, "%s", str);
    int ans = strtoi(str);
    printf("%d\n", ans);

    printf("小数点文字列: ");
    fscanf(stdin, "%s", str);
    double ans2 = mystrtof(str);
    printf("%.15f\n", ans2);
    double ans3 = atof(str);
    printf("%.15f\n", ans3);

    return 0;
}