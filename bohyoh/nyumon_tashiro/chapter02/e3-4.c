#include<stdio.h>

int main(void)
{
    int a,b;
    printf("二つの整数を入力してください\n");

    printf("整数A:");
    scanf("%d",&a);

    printf("整数B:");
    scanf("%d",&b);

    if(a>b)
        printf("AはBより大きいです");
    else if(a<b)
        printf("AはBより小さいです");
    else
        printf("AとBは等しいです");
    
    return 0;
}