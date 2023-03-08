#include <stdio.h>

// Creating a time stamp using structure

typedef struct date_time
{
    int day, month, year;
    int sec, min, hrs;
} date_time;

void display(date_time dt)
{
    printf("The time stamp is: \n%d/%d/%d\n", dt.day, dt.month, dt.year);
    printf("%d:%d:%d\n\n", dt.hrs, dt.min, dt.sec);
}
int compdate_time(date_time dt1, date_time dt2)
{
    if ((dt1.year > dt2.year) && (dt1.month > dt2.month))
    {
        if (dt1.hrs > dt2.hrs)
        {
            return 1;
        }
    }

    if ((dt1.year > dt2.year) && (dt1.month > dt2.month))
    {
        if (dt1.hrs < dt2.hrs)
        {
            return 1;
        }
    }

    if ((dt1.year < dt2.year) && (dt1.month > dt2.month))
    {
        if (dt1.hrs > dt2.hrs)
        {
            return 1;
        }
    }

    if ((dt1.year < dt2.year) && (dt1.month < dt2.month))
    {
        if (dt1.hrs > dt2.hrs)
        {
            return -1;
        }
    }

    if ((dt1.year < dt2.year) && (dt1.month < dt2.month))
    {
        if (dt1.hrs < dt2.hrs)
        {
            return -1;
        }
    }
    else
    {
        return 0;
    }
}
int main()
{
    date_time dt1 = {4, 5, 2022, 43, 12, 3};
    date_time dt2 = {7, 1, 2021, 28, 37, 2};

    display(dt1);
    display(dt2);

    int compare = compdate_time(dt1, dt2);
    printf("The comparison between two time stamp is: %d\n", compare);

    return 0;
}