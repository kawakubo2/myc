#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "187359271864928719170100716553";

    int n = sizeof(s) / sizeof(s[0]);
    printf("文字数(sizeof): %d\n", n);
    printf("文字数(strlen): %ld\n", strlen(s));

    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
    int count6 = 0;
    int count7 = 0;
    int count8 = 0;
    int count9 = 0;
    int i = 0;
    while(1) {
        if (s[i] == '\0') break;
        if (s[i] == '0') count0++;
        if (s[i] == '1') count1++;
        if (s[i] == '2') count2++;
        if (s[i] == '3') count3++;
        if (s[i] == '4') count4++;
        if (s[i] == '5') count5++;
        if (s[i] == '6') count6++;
        if (s[i] == '7') count7++;
        if (s[i] == '8') count8++;
        if (s[i] == '9') count9++;
        i++;
    }

    printf("0の個数: %d\n", count0);
    printf("1の個数: %d\n", count1);
    printf("2の個数: %d\n", count2);
    printf("3の個数: %d\n", count3);
    printf("4の個数: %d\n", count4);
    printf("5の個数: %d\n", count5);
    printf("6の個数: %d\n", count6);
    printf("7の個数: %d\n", count7);
    printf("8の個数: %d\n", count8);
    printf("9の個数: %d\n", count9);

    return 0;
}