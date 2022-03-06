#include <time.h>
#include <stdio.h>

int main(void)
{
    long t = 2000000000L; 
    time_t current = time(&t);
    struct tm *timer = localtime(&current);
    printf("%d年%d月%d日\n", timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday);
    return 0;   
}