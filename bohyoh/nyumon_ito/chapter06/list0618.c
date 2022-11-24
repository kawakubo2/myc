#include <stdio.h>

int fx;

void func(void)
{
    static int sx;
    int        ax = 0;
    printf("%3d%3d%3d\n", ax++, sx++, fx++);
}

int main(void)
{
    int i;
    puts("-----------");
    for (i = 0; i < 10; i++)
        func();
    puts("-----------");
    return 0;
}