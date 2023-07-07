#include <stdio.h>

enum season { Spring, Summer, Autumn, Winter, Invalid };

enum season select(void)
{
    int tmp;
    do {
        printf("%d.春 %d.夏 %d.秋 %d.冬 %d.終了: ", Spring, Summer, Autumn, Winter, Invalid);
        fscanf(stdin, "%d", &tmp);
    } while (tmp < Spring || tmp > Invalid);
}
int main(void)
{
    enum season selected;
    do {
        switch(selected = select()) {
            case Spring:
                printf("春は%d月～%d月です。\n", 3, 5);
                break;
            case Summer:
                printf("夏は%d月～%d月です。\n", 6, 8);
                break;
            case Autumn:
                printf("秋は%d月～%d月です。\n", 9, 11);
                break;
            case Winter:
                printf("冬は%d月、%d月、%d月です。\n", 12, 1, 2);
                break;
        }
    } while (selected != Invalid);
    return 0;
}
