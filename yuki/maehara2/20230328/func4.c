#include <stdio.h>
#include <string.h>

int week_of_day(char *name, int n);

int main(void)
{
    char youbi[4];
    for (int i = -1; i <= 7; i++) {
        int status = week_of_day(youbi, i);
        if (status == 0) {
            printf("%d ---> %s曜日\n", i, youbi);
        } else {
            puts("0～6を指定してください。");
        }
    }
    return 0;
}

int week_of_day(char name[4], int n)
{
    switch (n) 
    {
        case 0: strcpy(name, "日"); break;
        case 1: strcpy(name, "月"); break;
        case 2: strcpy(name, "火"); break;
        case 3: strcpy(name, "水"); break;
        case 4: strcpy(name, "木"); break;
        case 5: strcpy(name, "金"); break;
        case 6: strcpy(name, "土"); break;
        default: return 1;
    }
    return 0;
}