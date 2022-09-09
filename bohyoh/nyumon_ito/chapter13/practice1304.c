#include <stdio.h>

#define NUMBER 3

int main(void)
{
    FILE *fp;
    int i;
    char name[128];
    double height, weight; 
    if ((fp = fopen("hw2.dat", "w")) == NULL) {
        printf("\aファイルをオープンできません。\n");
    } else {
        for (i = 0; i < NUMBER; i++) {
            printf("%d人分の情報を入力してください\n", NUMBER);
            printf("名前: "); fscanf(stdin, "%s", name);
            printf("身長: "); fscanf(stdin, "%lf", &height);
            printf("体重: "); fscanf(stdin, "%lf", &weight);
            fprintf(fp, "%s %.1f %.1f\n", name, height, weight);
        }
        fclose(fp);
    }
    return 0;
}
