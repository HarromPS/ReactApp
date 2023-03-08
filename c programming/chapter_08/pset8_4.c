#include <stdio.h>
void slice(char *st, int m, int n); // if you do not declare the prototype of the function
                                    // you will encounter a warning of implicit function declaration

int main()
{

    // Q4 Write a function slice() to slice. It should change the original string
    // such that it is now the sliced string. Take m and n as the start and ending
    // postion for slice

    //

    char st[] = "Helloworld!"; // initialized a string
    slice(st, 2, 5);           // calling the function with value m=2 and n=5
    printf("%s\n", st);        // printing the sliced string using "%s" format specifier

    return 0;
}
void slice(char *st, int m, int n) // function defination
{
    int i = 0;          // local variable
    while ((i + m) < n) // loop running 1st for i=0 an m=2 until 4-->(n-1) as (n=5)
    {
        st[i] = st[i + m]; // st at index 0 changes to index at position 3(0,1,2)
        i++;
    }
    st[i] = '\0'; // at end when i=3, at 3 st[3] = \0 i.e nul character to terminate the string
}