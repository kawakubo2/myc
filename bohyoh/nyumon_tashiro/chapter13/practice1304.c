#include <stdio.h>

typedef struct {
    char name[100];
    double height;
    double weight;
} Student;

int main(void)
{
    FILE *fp;
    Student students[100];
    char name[100];
    double height, weight;
    int i, ninzu;

    printf("人数を入力してください: ");
    scanf("%d", &ninzu);

    if ((fp = fopen("hw2.dat", "w")) == NULL) {
        printf("ファイルをオープンできません。\n");
    } else {
        for (i = 0; i < ninzu; i++) {
            printf("名前: "); fscanf(stdin, "%s", name);
            printf("身長: "); fscanf(stdin, "%lf", &height);
            printf("体重: "); fscanf(stdin, "%lf", &weight);
            fprintf(fp, "%s %lf %lf\n", name, height, weight);
        }
        fclose(fp);
    }
}