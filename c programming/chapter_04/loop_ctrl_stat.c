#include <stdio.h>

int main()
{

    // Loops are used to print valus repeatedly
    /* while (condition){
        //code
        }
    */

    int a;
    printf("Enter a value betwen 1 and 10\n");
    scanf("%d", &a);
    while (a < 5)
    {
        printf("%d\n", a);
        a++;
    }

    // Quik quiz
    //  program to print natural numbers 10-20 when initial loop
    //  encounters it is initialized to zero
    int b;
    printf("Enter a value\n");
    scanf("%d", &b);

    while (b <= 20)
    {
        if (b >= 10)
        {
            printf("%d\n", b);
        }
        b++; // b=b+1;
    }

    // do while loop
    //  syntax :
    /*
     do{
         // code;
     }while(condition);
    */
    int c = 1;
    do
    {
        printf("value of c is now %d\n", c);
        c++;
    } while (c <= 10);

    return 0;
}