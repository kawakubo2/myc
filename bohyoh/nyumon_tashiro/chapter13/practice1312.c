#include <stdio.h>
#include <time.h>

char data_file[] = "datetime.bin";

int get_data(void)
{
    FILE *fp;
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);
    if ((fp = fopen(data_file, "rb")) == NULL) {
        printf("本プログラムを実行するのは初めてですね。\n");
        return -1;
    }
    
    fread(timer, sizeof(int), 6, fp);
    printf("前回は%d年%d月%d日%d時%d分%d秒でした。\n",
        timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
        timer->tm_hour, timer->tm_min, timer->tm_sec);
    if (fclose(fp)) {
        printf("ファイルをクローズできません。\n");
        return -1;
    }
    return 0;
}

int put_data(void)
{
    FILE *fp;
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);

    if ((fp = fopen(data_file, "wb")) == NULL) {
        printf("\aファイルをオープンできません。\n");
        return -1;
    }
    fwrite(timer->tm_year, sizeof(int), 1, fp);
    fwrite(timer->tm_mon, sizeof(int), 1, fp);
    fwrite(timer->tm_mday, sizeof(int), 1, fp);
    fwrite(timer->tm_hour, sizeof(int), 1, fp);
    fwrite(timer->tm_min, sizeof(int), 1, fp);
    fwrite(timer->tm_sec, sizeof(int), 1, fp);
    if (fclose(fp)) {
        printf("ファイルをクローズできません。\n");
        return -1;
    }
    return 0;
}

int main(void)
{
    get_data();
    put_data();
    return 0;
}