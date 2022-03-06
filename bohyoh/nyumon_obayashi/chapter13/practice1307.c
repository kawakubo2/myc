#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    char ch;
    int counter[10] = {0};
    FILE *fp;
    char filename[128];

    printf("ファイル名 : ");
    scanf("%s", filename);

    if ((fp = fopen(filename, "r")) == NULL) {
        printf("\aファイルをオープンできませんでした。\n");
        exit(-1);
    } else {
        while ((ch = fgetc(fp)) != EOF) {
            if (ch >= '0' && ch <= '9') {
                counter[ch - '0'] += 1;
            }
        }
        fclose(fp);
    }

    for (i = 0; i < 10; i++) {
        printf("%c: %3d\n",  i + '0', counter[i]);
    }

}