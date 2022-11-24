#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

int main(void)
{
    int n;
    printf("曜日を 0～6 の範囲で入力してください。");
    char buffer[BUFFER_SIZE];
    fgets(buffer, BUFFER_SIZE, stdin);
    n = atoi(buffer);
    switch(n)
    {
    case 0:
        printf("日曜日\n");
        break;
    case 1:
        printf("月曜日\n");
        break;
    case 2:
        printf("火曜日\n");
        break;
    case 3:
        printf("水曜日\n");
        break;
    case 4:
        printf("木曜日\n");
        break;
    case 5:
        printf("金曜日\n");
        break;
    case 6:
        printf("土曜日\n");
        break;
    default:
        printf("0～6の範囲で入力してください。\n");
        break;
    }
}