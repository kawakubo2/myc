#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

int main(void);

int main(void)
{
    printf("あなたが好きな飲み物は?\n");
    printf("1. コーヒー\n");
    printf("2. ミクルティ\n");
    printf("3. どちらでもない\n");

    char buffer[BUFFER_SIZE];
    int n;
    fgets(buffer, BUFFER_SIZE, stdin);
    n = atoi(buffer);

    switch (n)
    {
    case 1:
        printf("コーヒーです。\n");
        break;
    case 2:
        printf("ミルクティーです。\n");
        break;
    case 3:
        printf("どちらでもありません。\n");
        break;
    default:
        printf("1～3を入力してください。\n");
        break;
    }
}