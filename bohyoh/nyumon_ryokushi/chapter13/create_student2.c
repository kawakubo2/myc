#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

int ninzu;

char *del_ln(char *str)
{
    char *tmp = str;
    while(1) {
        if (*str == '\n') {
            *str = '\0';
            break;
        }
        str++;
    }
    return tmp;
}

void put_students(void)
{
    int i;
    FILE *fp;
    char buf[100];
    puts("Student構造体の配列を作成します。");
    printf("人数を入力してください: ");
    fgets(buf, 100, stdin);
    ninzu = atoi(buf);
    Student **students;
    students = (Student **)malloc(sizeof(Student) * ninzu);
    if (students == NULL) {
        printf("\aStudent構造体の配列のメモリの確保に失敗しました。\n");
        exit(-1);
    }
    for (i = 0; i < ninzu; i++) {
        Student *student = (Student *)malloc(sizeof(Student));
        if (student == NULL) {
            printf("\aStudent構造体のメモリの確保に失敗しました。\n");
            free(students);
            exit(-1);
        }
        printf("------< %d人目 >------\n", i + 1);
        printf("名前 : ");
        fgets(buf, 100, stdin);
        strcpy(student->name, del_ln(buf));
        printf("身長(cm) : ");
        fgets(buf, 100, stdin);
        student->height = atoi(buf);
        printf("体重(kg) : ");
        fgets(buf, 100, stdin);
        student->weight = atof(buf);
        printf("奨学金 : ");
        fgets(buf, 100, stdin);
        student->schols = atol(buf);
        students[i] = student;
    }
    fp = fopen("students.bin", "wb");
    if (fp == NULL) {
        printf("\aファイルのオープンに失敗しました。\n");
    } else {
        fwrite(students, sizeof(Student) * ninzu, ninzu, fp);
        fclose(fp);
    }
    free(students);
}

void get_students(void)
{
    int i;
    FILE *fp;
    Student **students;
    students = (Student **)malloc(sizeof(Student) * ninzu);
    if (students == NULL) {
        printf("\aStudent構造体の配列のメモリの確保に失敗しました。\n");
    } else {
        fp = fopen("students.bin", "rb");
        if (fp == NULL) {
            printf("\aファイルのオープンに失敗しました。\n");
        } else {
            fread(students, sizeof(Student) * ninzu, ninzu, fp);
            for (i = 0; i < ninzu; i++) {
                printf("------< %d人目 >------\n", i + 1);
                printf("名前: %s\n", students[i]->name);
                printf("身長: %d\n", students[i]->height);
                printf("体重: %.1lf\n", students[i]->weight);
                printf("奨学金: %ld\n", students[i]->schols);
            }
            fclose(fp);
        }
    }
    free(students);
}

int main(void)
{
    put_students();
    get_students();

    return 0;
}
