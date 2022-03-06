#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    char ch;
    int counter[128] = {0};
    FILE *fp;

    fp = fopen("The_Return_of_the_Native_pg122.txt", "r");
    if (fp == NULL) {
        printf("\aファイルをオープンできません。\n");
        exit(-1);
    } else {
        while ((ch = fgetc(fp)) != EOF) {
            if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
                counter[ch] += 1;
            }
        }
        fclose(fp);
        for (i = 0; i < 128; i++) {
            if (i >= 'A' && i <= 'Z' || i >= 'a' && i <= 'z') {
                printf("%c: %6d\n", i, counter[i]);
            }   
        }
    }
    return 0;
}