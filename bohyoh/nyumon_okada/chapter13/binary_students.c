#include <stdio.h>
#include <stdlib.h>

#define NUMBER 5

#define NAME_LEN 64

typedef struct {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
} Student;

void get_data(void)
{
    int i;
    FILE *fp;
    Student **students = (Student **)malloc(sizeof(Student) * NUMBER);
    if (students == NULL) {
        printf("\aメモリの確保に失敗しました。\n");
    } else {
        fp = fopen("students.bin", "rb");
        if (fp == NULL) {
            printf("\aファイルのオープンに失敗しました。\n");
        } else {
            fread(students, sizeof(Student), NUMBER, fp);
        }
        fclose(fp);
    }
    for (i = 0; i < NUMBER; i++) {
        printf("--- %d人目 ---\n", i + 1);
        printf("名前: %s\n", students[i]->name);
        printf("身長: %d\n", students[i]->height);
        printf("体重: %f\n", students[i]->weight);
        printf("奨学金: %ld\n", students[i]->schols);
    }
    free(students);
}

void put_data(void)
{
    int i;
    FILE *fp;
    Student **students = (Student **)malloc(sizeof(Student) * NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("--- %d人目 ---\n", i + 1);
        Student *s = (Student *)malloc(sizeof(Student));
        char buf[64];
        printf("名前 : ");
        fgets(s->name, 64, stdin);
        printf("身長 : ");
        fgets(buf, 64, stdin);
        s->height = atoi(buf);
        printf("体重 : ");
        fgets(buf, 64, stdin);
        s->weight= atof(buf);
        printf("奨学金 : ");
        fgets(buf, 64, stdin);
        s->schols = atol(buf);
        students[i] = s;
    }
    fp = fopen("students.bin", "wb");
    if (fp == NULL) {
        printf("\aファイルのオープンに失敗しました。\n");
    } else {
        fwrite(students, sizeof(Student), NUMBER, fp);
        fclose(fp);
    }
    free(students);
}

int main(void)
{
    put_data();
    get_data();

    return 0;
}