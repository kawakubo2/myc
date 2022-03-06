#include <stdio.h>

int main(void)
{
    int i, ch;
    FILE *fp;
//    char fname[FILENAME_MAX];
    int count[122] = {0};

//    printf("ファイル名 : ");
//    scanf("%s", fname);
    char fname[128] = "The_Return_of_the_Native_pg122.txt";    

    if ((fp = fopen(fname, "r")) == NULL) {
        printf("\aファイルをオープンできません。\n");
    } else {
        while((ch = fgetc(fp)) != EOF) {
            if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122) {
                count[ch] += 1;
            }
        }
        fclose(fp);
    }
    
    for (i = 0; i <= 122; i++) {
        if ((char)i >= 65 && (char)i <= 90 || (char)i >= 97 && (char)i <= 122) {
            printf("%c: %5d\n", i, count[i]);
        }
    }

    return 0;
}
