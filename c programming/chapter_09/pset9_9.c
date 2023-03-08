#include <stdio.h>

typedef struct date // datatype of date
{
    int day, month, year;
} date; // date = alias of struct date

void display(date d) // function to display dates
{
    printf("The date is: %d/%d/%d\n", d.day, d.month, d.year);
    // it is like d1 of int date, d1 of int month, d1 of int year
    // i.e d1==>{2=day, 4=month, 2022=year}
}

int comp_date(date d1, date d2) // comparing two dates
{
    if (d1.year > d2.year) // comparing the years
    {
        return 1;
    }
    if (d1.year < d2.year) // only if statements bcoz if true the will move forward
    {
        return -1;
    }

    if (d1.month > d2.month) // comparing the months
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }

    if (d1.day > d2.day) // comparing the days
    {
        return 1;
    }
    if (d1.day < d2.day)
    {
        return -1;
    }
    return 0;
}

int main()
{
    // Q9 Write a structure capable of storing dates.
    //  Write a function to compare those dates.

    date d1 = {2, 4, 2022};
    date d2 = {9, 8, 2023};
    display(d1); // calling function for d1 date
    display(d2); // calling function for d2 date

    int result = comp_date(d1, d2); // calling the compare function
    printf("The comparison between dates is : %d\n", result);
    if (result > 0)
    {
        printf("Date d1 is > Date d2\n");
    }
    else if (result < 0)
    {
        printf("Date d1 is < Date d2\n");
    }
    else
    {
        printf("End\n");
    }

    return 0;
}