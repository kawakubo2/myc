#include <stdio.h>

int parseInt(const char *str)
{
    int i, result = 0;
    while(str[i]) {
        if (str[i] < '0' || str[i] > '9') {
            return -1;
        }
        result = result * 10 + (str[i++] - '0');
    }
    return result;
}

int main(void)
{
    int a, b;
    char n1[128]; 
    char n2[128];
    printf("整数n1を入力してください: ");
    scanf("%s", n1);

    a = parseInt(n1);
    if (a == -1) return -1;
    printf("%d * 10 = %d\n", a, a * 10);
    return 0;
}

