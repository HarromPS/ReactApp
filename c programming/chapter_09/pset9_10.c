#include <stdio.h>

// Q10 Write a structure capable of storing time.
//  Write a function to compare those dates.
// ust like Q9


typedef struct time // datatype of time
{
    int sec, minutes, hours;
} time; // time = alias of struct time

void display(time d) // function to display times
{
    printf("The time is: %d/%d/%d\n", d.sec, d.minutes, d.hours);
    // it is like d1 of int time, d1 of int minutes, d1 of int hours
    // i.e d1==>{2=sec, 4=minutes, 2022=hours}
}

int comp_time(time d1, time d2) // comparing two times
{
    if (d1.hours > d2.hours) // comparing the hourss
    {
        return 1;
    }
    if (d1.hours < d2.hours) // only if statements bcoz if true the will move forward
    {
        return -1;
    }

    if (d1.minutes > d2.minutes) // comparing the minutes
    {
        return 1;
    }
    if (d1.minutes < d2.minutes)
    {
        return -1;
    }

    if (d1.sec > d2.sec) // comparing the secs
    {
        return 1;
    }
    if (d1.sec < d2.sec)
    {
        return -1;
    }
    return 0;
}

int main()
{

    time t1 = {15,26,7};    // like 15 sec, 26 min, 7 hrs
    time t2 = {54,45,8};    // like 54 sec, 45 min, 8 hrs
    display(t1); // calling function for d1 time
    display(t2); // calling function for d2 time

    int result = comp_time(t1, t2); // calling the compare function
    printf("The comparison between times is : %d\n", result);
    if (result > 0)
    {
        printf("time d1 is > time d2\n");
    }
    else if (result < 0)
    {
        printf("time d1 is < time d2\n");
    }
    else
    {
        printf("End\n");
    }

    return 0;
}