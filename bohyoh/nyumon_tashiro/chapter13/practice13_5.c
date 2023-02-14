#include <stdio.h>
#include <time.h>

char data_file[] = "datetime.dat";

void get_data(void)
{
    FILE *fp;
    if ((fp = fopen(data_file, "r")) == NULL) {
        printf("本プログラムを実行するのは初めてですね。\n");
    } else {
        int year, month, day, h, m, s;
        char mood[128];
        fscanf(fp, "%d%d%d%d%d%d%s", &year, &month, &day, &h, &m, &s, mood);
        printf("前回は%d年%d月%d日%d時%d分%d秒で。気分は%sでした。\n",
            year, month, day, h, m, s, mood);
        fclose(fp);
    }
}

void put_data(void)
{
    char mood[128];
    FILE *fp;
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);

    if ((fp = fopen(data_file, "w")) == NULL) {
        printf("\aファイルをオープンできません。\n");
    } else {
        printf("今日の気分は: ");
        fscanf(stdin, "%s", mood);
        fprintf(fp, "%d %d %d %d %d %d %s",
            timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
            timer->tm_hour,        timer->tm_min,     timer->tm_sec, mood);
        fclose(fp);
    }
}

int main(void)
{
    get_data();
    put_data();
    return 0;
}