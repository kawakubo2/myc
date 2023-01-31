#include <stdio.h>

typedef struct {
    char name[100];
    double height;
    double weight;
} Student;

int main(void)
{
    FILE *fp;
    char name[100];
    Student students[100];
    if ((fp = fopen("hw.dat", "r")) == NULL) {
        printf("ファイルがオープンできません。");
    } else {
        while (fscanf())
    }
}