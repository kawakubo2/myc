#include <stdio.h>

int main(void)
{
    int tensu1[4][3] = 
    {
        {91, 63, 78},
        {67, 72, 46},
        {89, 34, 53},
        {32, 54, 34}
    };
    int tensu2[4][3] = 
    {
        {97, 67, 82},
        {73, 43, 46},
        {97, 56, 21},
        {85, 46, 36}
    };

    int i, j;
    while(1) {
        printf("i, jを入力してください(iに9999を入力したら終了\n");
        scanf("%d%d", &i, &j);
        if (i == 9999) break;
        printf("tensu2[%d][%d] ---> %d\n", i, j, tensu2[i][j]);
    }
    return 0;
}