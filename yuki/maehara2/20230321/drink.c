#include <stdio.h>

int main(void)
{
    int age;
    printf("何歳ですか: ");
    fscanf(stdin, "%d", &age);

    if (age >= 20) {
        printf("お酒の販売は可能です。\n");
    } else {
        printf("お酒の販売は出来ません。\n");
    }

    return 0;
}