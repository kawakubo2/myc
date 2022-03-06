#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static char data_file[] = "datetime.dat";

void get_data(void)
{
    puts("---< get_data関数開始 >---");
    FILE *fp;
    struct tm *timer;
    timer = (struct tm *)malloc(sizeof(struct tm));
    if (timer == NULL) {
        printf("\a記憶域の確保に失敗しました。\n");
    } else {
        if ((fp = fopen(data_file, "rb")) == NULL) {
            printf("\aファイルをオープンできませんでした。\n");
        } else {
            fread(timer, sizeof(struct tm), 1, fp);
            printf("現在時刻は%d年%d月%d日 %d時%d分%d秒\n", timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday, timer->tm_hour, timer->tm_min, timer->tm_sec);
            fclose(fp);
        }
        // メモリの開放
        free(timer);
    }
    puts("---< get_data関数終了 >---");
}


void put_data(void)
{
    puts("---< put_data関数終了 >---");
    FILE *fp;
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);

    if ((fp = fopen(data_file, "wb")) == NULL) {
        printf("\aファイルをオープンできませんでした。\n");
    } else {
        fwrite(timer, sizeof(struct tm), 1, fp);
        puts("printfで時刻表示");
        printf("現在時刻は%d年%d月%d日 %d時%d分%d秒\n", timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday, timer->tm_hour, timer->tm_min, timer->tm_sec);
        fclose(fp);
    }
    puts("---< put_data関数終了 >---");
}

int main(void)
{
    put_data();
    get_data();

    return 0;
}
