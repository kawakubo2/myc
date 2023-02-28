#include <stdio.h>

void print_file(char *filename);
int main(int argc, char *argv[]);

#define LINES 5
#define BUFFER_SIZE 256

int main(int argc, char *argv[])
{
    printf("ファイルの初めの %d 行を表示するプログラム\n", LINES);
    if (argc < 2) {
        printf("使用法: %s ファイル名1, ファイル名2, ... \n", argv[0]);
        return -1;
    }
    for (int i = 1; i < argc; i++) {
        print_file(argv[i]);
        printf("\n");
    }
    return 0;
}

void print_file(char *filename)
{
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("ファイル %s がオープンできません。\n", filename);
        return;
    }
    printf("====== %s ======\n", filename);
    for (int i = 0; i < LINES; i++) {
        char buffer[BUFFER_SIZE];
        if (fgets(buffer, BUFFER_SIZE, fp) == NULL) {
            break;
        }
        printf("%s", buffer);
    }
    if (fclose(fp)) {
        printf("ファイルのクローズに失敗しました。\n");
        return;
    }
}