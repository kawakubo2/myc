#include <stdio.h>
#include <stdlib.h>

#define NUMBER 3

int main(void)
{
    int ten[NUMBER];
    char buffer[128];
    for (int i = 0; i < NUMBER; i++) {
        printf("ten[%d]: ", i);
        fgets(buffer, 128, stdin);
        ten[i] = atoi(buffer);
    }

    int sum = 0;
    for (int i = 0; i < NUMBER; i++) {
        sum += ten[i];
    }
    double heikin = (double)sum / NUMBER;
    printf("国語は %d 点\n", ten[0]);    
    printf("数学は %d 点\n", ten[1]);    
    printf("英語は %d 点\n", ten[2]);    
    printf("平均点は %0.1f 点\n", heikin);

    return 0;
}