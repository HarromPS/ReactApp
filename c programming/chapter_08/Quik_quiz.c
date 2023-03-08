#include <stdio.h>

int main()
{

    // Quiz: Create a program using strings and print is content using
    // using a loop

    char str[10] = "ABCD"; // a string is initialized
    char *ptr = str;       // the address of the string is stored in a pointer
   
        { // a loop is used here
            while (*ptr != '\0')
                printf("%c\n", *ptr); // printing the values of the
                                      // addersses stored in pointer

            ptr++; // incerment in the position of the pointer
        }

        return 0;
}
   
   