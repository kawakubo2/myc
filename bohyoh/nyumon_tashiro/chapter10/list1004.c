#include <stdio.h>

void hiroko(int *height)
{
    if (*height < 180)
        *height = 180;
}

int main(void)
{
    int sato = 178;
    int sanaka = 175;
    int masaki = 179;

    hiroko(&masaki);

    printf("佐藤君の身長は : %d\n", sato);
    printf("佐中君の身長は : %d\n", sanaka);
    printf("真崎君の身長は : %d\n", masaki);

    return 0;
}