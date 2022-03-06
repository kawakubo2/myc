#include <stdio.h>

int strtoi(const char *nptr)
{
    int result = 0;
    char first = *nptr++;
    if (first >= '0' && first <= '9') result = first - '0';
    while(*nptr) {
        result = result * 10 + (*nptr - '0');
        nptr++;
    }
    return first == '-' ? -result : result;
}

double mypow(int n) {
    int i;
    double result = 1.0;
    for (i = 0; i < n; i++) {
        result *= 10;
    }
    return result;
}

double strtof(const char *nptr)
{
    double result = 0.0;
    char first = *nptr++;
    if (first >= '0' && first <= '9') result = (double)(first - '0');
    int dot_flag = 0;
    int frac_count = 0;
    while(*nptr) {
        if (*nptr == '.') {
            dot_flag = 1;
            nptr++;
            continue;
        }
        if (dot_flag) frac_count++;
        result = result * 10.0 + (double)(*nptr - '0');
        nptr++;
    }
    result /=  (double)(mypow(frac_count)); 
    return first == '-' ? -result : result;
}

int main(void)
{
    int r1;
    double r2;
    char str[128];

    puts("---< strtoiテスト >---");
    printf("整数を入力してください : ");
    scanf("%s", str);

    r1 = strtoi(str);

    printf("%d * 2 = %d\n", r1, r1 * 2);

    puts("---< strtofテスト >---");
    printf("小数点を入力してください : ");
    scanf("%s", str);

    r2 = strtof(str);

    printf("%23.21f * 2 = %23.21f\n", r2, r2 * 2);
    
    return 0;
}

