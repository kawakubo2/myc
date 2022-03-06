#include <stdio.h>

char card16[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

int get_pos(char c) 
{
    int i = 0;
    while (1) {
        if (card16[i] == c) return i;
        i++;
    }
    return -1;
}

int card16to10(char s[], int n)
{
    int i = 0, result = 0;
    while(s[i]) {
        result = result * 16 + get_pos(s[i++]);
    }
    return result;
}


int main(void)
{
    int size, i = 0;
    char str[128];

    printf("16進数を入力してください:");
    scanf("%s", str);

    size = sizeof(str) / sizeof(str[0]) - 1;
    int card10 = card16to10(str, size);

    printf("16進数%sは10進数で%dです。\n", str, card10);


    return 0;
}
