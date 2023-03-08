#include<stdio.h>
#include<string.h>

// There are some std macros which can be used to print program 
// file (__FILE__),Date (__DATE__), Time (__TIME__), Line (__LINE__)
int main()
{
    printf("Current File: %s\n",__FILE__);
    printf("Current Date: %s\n",__DATE__);
    printf("Current Time: %s\n",__TIME__);
    printf("Line Number: %d\n",__LINE__);

    return 0; 
}