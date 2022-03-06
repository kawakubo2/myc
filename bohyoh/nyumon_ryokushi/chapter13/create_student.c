#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

int ninzu;

void put_students(void)
{
    int i;
    FILE *fp;
    char buf[100];
    puts("Student構造体の配列を作成します。");
    printf("人数を入力してください: ");
    fgets(buf, sizeof(buf), stdin);
    ninzu = atoi(buf);
    Student **students;
    students = (Student **)malloc(sizeof(Student) * ninzu);
    for (i = 0; i < ninzu; i++) {
        Student *student = (Student *)malloc(sizeof(Student));
        printf("------< %d人目 >------\n", i + 1);
        printf("名前 : ");
        fgets(buf, sizeof(buf), stdin);
        strcpy(student->name, buf);
        printf("身長(cm) : ");
        fgets(buf, sizeof(buf), stdin);
        student->height = atoi(buf);
        printf("体重(kg) : ");
        fgets(buf, sizeof(buf), stdin);
        student->weight = atof(buf);
        printf("奨学金 : ");
        fgets(buf, sizeof(buf), stdin);
        student->schols = atol(buf);
        students[i] = student;
    }
    fp = fopen("studentx.txt", "wb");
    if (fp == NULL) {
        printf("\aファイルのオープンに失敗しました。\n");
    } else {
        fwrite(students, sizeof(Student) * ninzu, ninzu, fp);
        fclose(fp);
    }
}

void get_students(void)
{
    int i;
    FILE *fp;
    Student **students;
    students = (Student **)malloc(sizeof(Student) * ninzu);
    if (students == NULL) {
        printf("\aメモリの確保に失敗しました。\n");
    } else {
        fp = fopen("students.txt", "rb");
        if (fp == NULL) {
            printf("\aファイルのオープンに失敗しました。\n");
        } else {
            fread(students, sizeof(Student) * ninzu, ninzu, fp);
            for (i = 0; i < ninzu; i++) {
                printf("------< %d人目 >------\n", i + 1);
                printf("名前: %s\n", students[i]->name);
                printf("身長: %d\n", students[i]->height);
                printf("体重: %lf\n", students[i]->weight);
                printf("奨学金: %ld\n", students[i]->schols);
            }
            fclose(fp);
        }
    }
}

int main(void)
{
    put_students();
    get_students();

    return 0;
}
