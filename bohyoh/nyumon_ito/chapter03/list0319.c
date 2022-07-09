#include <stdio.h>

int main(void)
{
    int no;
    printf("点数: "); scanf("%d", &no);   
    switch (no) {
        case 0:
        case 1:
        case 2:
        case 3:
            puts("Dランクです。");
            break;
        case 4:
        case 5:
            puts("Cランクです。");
            break;
        case 6:
        case 7:
            puts("Bランクです。");
            break;
        case 8:
        case 9:
            puts("Aランクです。");
            break;
        case 10:
            puts("Sランクです。");
            break;
    }
    return 0;
}
