#include <stdio.h>

typedef struct {
    int year;
    int month;
    int day;
} Date;

int day_of_year(Date d);
int compare_Date(Date d1, Date d2);

int main(void)
{
    int month, day, year;
    Date d1, d2;

    printf("Enter first Date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    d1.day = day;
    d1.month = month;
    d1.year = year;

    printf("Enter first Date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    d2.day = day;
    d2.month = month;
    d2.year = year;

    if(d1.year < d2.year)
        printf("%d/%d/%d is earlier than %d/%d/%d\n", d1.day, d1.month, d1.year, d2.day, d2.month, d2.year);
    else if (d1.year > d2.year)
        printf("%d/%d/%d is earlier than %d/%d/%d\n", d2.day, d2.month, d2.year, d1.day, d1.month, d1.year);
    else
    {
        switch (compare_Date(d1, d2))
        {
        case -1:
            printf("%d/%d/%d is earlier than %d/%d/%d\n", d1.day, d1.month, d1.year, d2.day, d2.month, d2.year);
            break;
        case 1:
            printf("%d/%d/%d is earlier than %d/%d/%d\n", d2.day, d2.month, d2.year, d1.day, d1.month, d1.year);
            break;
        }
    }
    return 0;
}

int day_of_year(Date d)
{
    int month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 13};
    int i, sum_of_day = 0;
    for(i=0;i<d.month;i++)
    {
        sum_of_day += month_day[i];
    }
    sum_of_day += d.day;

    return sum_of_day;
}

int compare_Date(Date d1, Date d2)
{
    if(day_of_year(d1) < day_of_year(d2))
        return -1;
    else if (day_of_year(d1) == day_of_year(d2))
        return +1;
    else
        return 0;
}