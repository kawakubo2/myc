#include <stdio.h>

int main(void)
{
    char firstname[48];
    char lastname[48];

    printf("お名前は: ");
    scanf("%s %s", firstname, lastname);

    printf("こんにちは、%s %sさん！！\n", firstname, lastname);

    return 0;
}
