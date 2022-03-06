#include <stdio.h>

int main(void)
{
    int i, result = 0;
    char str[128];

    printf("整数を入力してください : ");
    scanf("%s", str);

    i = 0;
    while(str[i]) {
        if (str[i] < '0'|| str[i] > '9') {
            return -1;
        }
        result = result * 10 + (str[i] - '0');
        i++;
    }

    printf("%s * 10 = %d\n", str, result * 10);

    return 0;
}

    
