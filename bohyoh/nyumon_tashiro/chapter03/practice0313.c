#include <stdio.h>

int main(void)
{
    int month;
    //puts("月を入力すれば季節が表示されます。");
    //printf("月: "); fscanf(stdin, "%d", &month);
    for (month = 0; month <= 13; month++) 
    {
        switch (month) 
        {
            case 12:
            case 1:
            case 2: puts("冬です。"); break; 
            case 3:
            case 4:
            case 5: puts("春です。"); break;
            case 6:
            case 7:
            case 8: puts("夏です。"); break;
            case 9:
            case 10:
            case 11: puts("秋です。"); break;
            default: puts("月は1～12を入力してください。");
        }   
    }
}