#include <stdio.h>

enum animal { Dog = 1, Cat, Monkey, Tiger, Invalid };

void dog(void)
{
    puts("ワンワン!!");
}
void cat(void)
{
    puts("ニャーオ!!");
}
void monkey(void)
{
    puts("キッキッ!!");
}
void tiger(void)
{
    puts("ガァーオ!!");
}
enum animal select(void)
{
    int tmp;
    do {
        printf("%d...犬 %d...猫 %d...猿 %d...虎 %d...終了: ", Dog, Cat, Monkey, Tiger, Invalid);
        fscanf(stdin, "%d", &tmp);
    } while (tmp < Dog || tmp > Invalid);
    return (enum animal)tmp;
}
int main(void)
{
    enum animal selected;
    do {
        switch(selected = select()) {
            case Dog    : dog();    break;
            case Cat    : cat();    break;
            case Monkey : monkey(); break;
            case Tiger  : tiger();  break;
        }
    } while(selected != Invalid);
    return 0;
}
