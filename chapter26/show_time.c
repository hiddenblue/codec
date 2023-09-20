/* display the current date and time in three formats */
#include <stdio.h>

#include <time.h>

int main(void)
{
    time_t cur_time;
    cur_time = time(NULL);

    struct tm *ptr;

    char date_time[21];
    int hour;
    char am_or_pm;

    printf("%s", ctime(&cur_time)); // 默认格式

    // 这里我们对日期打印的格式提出了要求。
    // 可以考虑用strftime函数，但是好像还是比较有限。

    // 然后我们可以考虑通过mktime将 日历时间分解为分解时间，方便用格式化控制符。

    printf("\n");

    strftime(date_time, sizeof(date_time), "%m-%d-%Y  %I:%M%p\n", localtime(&cur_time));
    puts(date_time);

    ptr = localtime(&cur_time);
    hour = ptr->tm_hour;
    if (hour <= 12)
        am_or_pm = 'a';
    else
    {
        hour -= 12;
        am_or_pm = 'p';
    }
    if (hour == 0)
        hour = 12;
    printf("%.2d-%.2d-%d %2d:%.2d %cm\n", ptr->tm_mon + 1, ptr->tm_mday,
           ptr->tm_year + 1900, hour, ptr->tm_min, am_or_pm);

    return 0;
}