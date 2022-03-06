#include <stdio.h>

int main(void)
{

    char firstname[128];
    char lastname[128];
    printf("firstnameとlastnameを半角空白区切りで入力してください: ");
    scanf("%s %s", firstname, lastname);

    printf("%s %s\n", firstname, lastname);

    return 0;
}

