#include<stdio.h>
#include<string.h>

// There are some std macros which can be used to print program 
// file (__FILE__),Date (__DATE__), Time (__TIME__), Line (__LINE__)
int main()
{
    // Display current file name as a character literal
    printf("Current File: %s\n",__FILE__);

    // Display Current Date in "MMM DD YYYY" format as a character literal
    printf("Current Date: %s\n",__DATE__);

    // Display Current Time in "HH : MM : SS" format as a string literal
    printf("Current Time: %s\n",__TIME__);

    // Display Current Line number as a Decimal Number
    printf("Line Number: %d\n",__LINE__);

    // Return "1" if program is compiled with standard ANSI C std
    printf("ANSI: %d\n",(__STDC__));


    return 0; 
}