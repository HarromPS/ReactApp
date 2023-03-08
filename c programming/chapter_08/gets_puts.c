#include <stdio.h>

int main()
{
    // no multi-word input is acceptd by scanf
    // e.g scanf-"Hello World"
    // print- Hello
    char str[40];
    printf("Enter new string\n");
    gets(str);
    printf("Your entered string is %s\n", str);

    char st[40];
    printf("Enter new string: ");
    gets(st);   // gets string as input
    puts(st);   // prints the string place curser on next line
    

    return 0;
}