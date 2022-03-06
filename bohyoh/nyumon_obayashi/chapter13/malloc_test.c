#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct {
    char name[100];
    int height;
    double weight;
} Student;

char *replace_null(char *str)
{
    char *temp = str;
    while(*str) {
        if (*str == '\n') {
            *str = '\0';
            break;
        }
        str++;
    }
    return temp;
}

void get_students(int ninzu)
{
    int i;
    FILE *fp;
    fp = fopen("students.bin", "rb");
    if (fp == NULL) {
        printf("\aファイルをオープンできません。\n");
        exit(-1);
    }
    Student **s = (Student **)malloc(sizeof(Student) * ninzu);
    if (s == NULL) {
        printf("\aStudent配列のメモリの確保に失敗しました。\n");
        exit(-1);
    }
    fread(s, sizeof(Student), ninzu, fp);
    for (i = 0; i < ninzu; i++) {
        printf("---< %d人目 >---\n", i + 1);
        printf("名前 : %s\n", replace_null(students[i]->name));
        printf("身長 : %d\n", students[i]->height);
        printf("体重 : %.1lf\n", students[i]->weight);
    }
    free(students);
    fclose(fp);
}

void put_students(Student **s, int ninzu)
{
    int i;
    FILE *fp;
    fp = fopen("students.bin", "wb");
    if (fp == NULL) {
        printf("\aファイルをオープンできません。\n");
        exit(-1);
    }
    fwrite(s, sizeof(Student), ninzu, fp)
    fclose(fp);
}

int main(void)
{
    int i;
    int ninzu;
    char buf[100];
    printf("人数を入力してください : ");
    fgets(buf, 100, stdin);
    ninzu = atoi(buf);
    Student **students;
    students = (Student **)malloc(sizeof(Student) * ninzu);
    if (students == NULL) {
        printf("\aStudent配列のメモリの確保に失敗しました。\n");
        exit(-1);
    }

    for (i = 0; i < ninzu; i++) {
        Student *s = (Student *)malloc(sizeof(Student));
        if (students == NULL) {
            printf("\aStudentのメモリの確保に失敗しました。\n");
            exit(-1);
        }
        printf("---< %d人目 >---\n", i + 1);
        printf("名前 : ");
        fgets(s->name, 100, stdin);
        printf("身長 : ");
        fgets(buf, 100, stdin);
        s->height = atoi(buf);
        printf("体重 : ");
        fgets(buf, 100, stdin);
        s->weight = atof(buf);
        students[i] = s;
    }
    puts("\n===< 読み取り >===");

    put_students(students, ninzu);
    get_students(ninzu);

    free(students);
}