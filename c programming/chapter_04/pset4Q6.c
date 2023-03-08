#include <stdio.h>

int main()
{

    // Q5 writ ea program to sum first ten natural numbers
    // using while loop

    int i = 0, sum;
    while (i <= 10)
    {
        sum = sum + i;

        i++;
    }
    printf("sum %d\n", sum);

    // Q6 write a program to implement the above program
    // using for and do-while loop

    int a, n, suum = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (a = 0; a <= n; a++)
    {
        suum = suum + a;
    }
    printf("suum=%d\n", suum);

    int u=0 , snum=0;
    do
    {
        snum = snum + u;

        u++;
    } while (u <= 10);

        printf("sunm=%d\n", snum);

    return 0;
}