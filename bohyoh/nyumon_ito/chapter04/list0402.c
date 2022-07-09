#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int hand, chand, retry;
    do {
        do {
            printf("手を選んでください[0.グー 1.チョキ 2.パー]: ");
            scanf("%d", &hand);
        } while(hand < 0 || hand > 2);
        printf("あなたは");
        switch(hand) {
            case 0:
                printf("グー");
                break;
            case 1:
                printf("チョキ");
                break;
            case 2:
                printf("パー");
                break;
        }
        printf("を選びました。\n");

        srand(time(NULL));
        chand = rand() % 3;
        printf("コンピュータは");
        switch(chand) {
            case 0:
                printf("グー");
                break;
            case 1:
                printf("チョキ");
                break;
            case 2:
                printf("パー");
                break;
        }
        printf("を選びました。\n");
        
        if ((chand + 1) % 3 == hand) {
            puts("コンピュータの勝ち");
        } else if ((hand + 1) % 3 == chand) {
            puts("プレイヤーの勝ち");
        } else {
            puts("引き分け");
        }
        do {
            printf("もう一度: yes---> 1 no ---> 9: ");
            scanf("%d", &retry);
        } while (retry != 1 && retry != 9);

    } while (retry == 1);

    return 0;
}