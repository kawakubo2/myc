#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int n;
    unsigned long count = 0L;
    unsigned char buf[16];
    FILE *fp;
    char fname[FILENAME_MAX];

    printf("ファイル名: ");
    fscanf(stdin, "%s", fname);

    fp = fopen(fname, "rb");
    if (fp == NULL) {
        printf("ファイルをオープンできません。\n");
        return -1;
    }
    while ((n = fread(buf, 1, 16, fp)) > 0) {
        int i;
        printf("%08lX ", count);
        for (i = 0; i < n; i++) 
            printf("%02X ", (unsigned char)buf[i]);
        if (n < 16)
            for (i = n; i < 16; i++)
                printf("   ");
        for (i = 0; i < n; i++)
            putchar(isprint(buf[i]) ? buf[i]: '.');
        putchar('\n');
        count += 16;
    }
    if (fclose(fp)) {
        printf("ファイルをクローズできません。\n");
    }
    return 0;
}
