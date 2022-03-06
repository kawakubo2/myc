#include <stdio.h>

enum animal { Dog = 1, Cat, Monkey, Hourse, Invalid };

enum animal select(void)
{
    int tmp;

    do {
        printf("%d…犬 %d…猫 %d…猿 %d…馬 %d…終了 : ", Dog, Cat, Monkey, Hourse, Invalid);
        scanf("%d", &tmp);
    } while (tmp < Dog || tmp > Invalid);
    return tmp;
}

int main(void)
{
    enum animal selected;
    do {
        selected = select();
        printf("%d\n", selected);
    } while(selected != Invalid);

    return 0;
}

    

