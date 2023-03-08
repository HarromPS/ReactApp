#include <stdio.h>

int strlen(char *st)    // inside the strln *st is a pointer of character datatype
{
    char *ptr = st;     // *ptr is a char and stores the value of a pointer st
    int len = 0;        // int len is a local variable
    while (*ptr != '\0')    //it starts with index 0 --> M 
    {                       
        len++;              // len counts the no. of times loop run 
        ptr++;              // ptr increases upto \0
    }
    return len;             // function returns final count of len
}
int main()
{
    // Q3 Write your own version of strlen function from <string.h>

    char st[] = "MySQL";
    int i = strlen(st);
    printf("The length of the string is %d", i);

    return 0;
}