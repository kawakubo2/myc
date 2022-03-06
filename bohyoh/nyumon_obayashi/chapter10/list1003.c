#include <stdio.h>

int main(void)
{
    int sato = 178;
    int sanaka = 175;
    int masaki = 179;

    int *isako, *hiroko;

    isako = &sato;
    hiroko = &masaki;

    printf("いさ子さんの好きな人の身長 : %d\n", *isako);
    printf("ひろ子さんの好きな人の身長 : %d\n", *hiroko);

    isako = &sanaka;
    *hiroko = 180;

    printf("\n");
    printf("佐藤君の身長 : %d\n", sato);
    printf("佐中君の身長 : %d\n", sanaka);
    printf("真崎君の身長 : %d\n", masaki);

    printf("いさ子さんの好きな人の身長 : %d\n", *isako);
    printf("ひろ子さんの好きな人の身長 : %d\n", *hiroko);

    return 0;
}

