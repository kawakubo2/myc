#include <stdio.h>
// コンパイルが通らない
enum animal { Dog, Cat, Monkey, Invalid };

void dog(void)
{
    puts("ワンワン！！");
}
void cat(void)
{
    puts("ニャ～オ！！");
}
void monkey(void) 
{
    puts("キッキッ！！");
}

enum animal select(void)
{
    int tmp;
    do {
        printf("%d…犬 %d…猫 %d…猿 %d…終了: ", Dog, Cat, Monkey, Invalid);
        scanf("%d", &tmp);
    } while (tmp < Dog || tmp > Invalid);
    return (enum animal)tmp;
}

int main(void)
{
    enum animal selected;
    do {
        switch (selected = select()) {
            case Dog: dog(); break;
            case Cat: cat(); break;
            case Monkey: monkey(); break;
        } 
    } while (selected != Invalid);
    
    return 0;
}