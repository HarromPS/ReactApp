#include <stdio.h>

int main()
{

    // convnient way to print the entier string

    char string[10] = {'s', 's', 'd', 'f', '\0'};
    printf("%s\n", string);

    // OR

    char *ptr = "aaaa"; //*ptr storing address of string
                        // char *ptr="aaaa"; is converted into
                        //{'a', 'a', 'a', 'a', 'a', 'a', '\0'};

    printf("%s\n", ptr); // % is used here to print the whole string
                         // printing ptr = value stored in address
    return 0;
}