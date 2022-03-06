#include <stdio.h>

int main(void)
{
    int month;
    do {
        printf("月を整数で入力してください:");
        scanf("%d", &month);
    } while (month < 1 || month > 12);

    switch(month)
    {
        case 12:
        case 1:
        case 2:
            printf("%d月は冬です。\n", month);
            break;
        case 3:
        case 4:
        case 5:
            printf("%d月は春です。\n", month);
            break;
        case 6:
        case 7:
        case 8:
            printf("%d月は夏です。\n", month);
            break;
        case 9:
        case 10:
        case 11:
            printf("%d月は秋です。\n", month);
            break;
    }
    
    if (month >= 3 && month <= 5) {
        printf("%d月は春です。\n", month);
    }
    else if (month >= 6 && month <= 8) {
        printf("%d月は夏です。\n", month);
    }
    else if (month >= 9 && month <= 11) {
        printf("%d月は秋です。\n", month);
    }
    else if (month == 1 || month == 2 || month == 12) {
        printf("%d月は冬です。\n", month);
    }

    return 0;
}
