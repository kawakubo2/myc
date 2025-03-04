#include <stdio.h>

int main(void)
{
    int hit = 57;

    int lot1 = 1387801;
    int lot2 = 1870057;

    if (lot1 % 100 == hit)
    {
        puts("4等賞3000円!");
    }
    else
    {
        puts("外れ…残念");
    }

    if (lot2 % 100 == hit)
    {
        puts("4等賞3000円!");
    }
    else
    {
        puts("外れ…残念");
    }
    return 0;
}