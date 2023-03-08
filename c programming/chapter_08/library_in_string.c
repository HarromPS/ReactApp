#include <stdio.h>
#include <string.h> // to use all string functions


int main()
{ // 1 strlen()
    char *st = "Hello";
    int a = strlen(st);
    printf("\nThe length of the string is %d\n\n", a); // excluding the null character

    // 2 strcpy()
    char str[] = "Hello World";
    char target[30];     // string of str is copied into target
    strcpy(target, str); // 1st --> jisme copy karna hai
                         // 2nd --> jiska kopy karna hai
    printf("%s\n\n", target);

    // 3 strcat() ==> concatenate without gap
    char st3[98] = "Helle";
    char *sdt = "Olle";
    strcat(st3, sdt);
    printf("Now st3 becomes %s \n\n", st3); //HelleOlle without space

    // 4 strcmp()              \0 - ASCII value is 0
                            // i - ASCII value is 111
    char abc[23] = "Delhi"; // ASCII value of Delhi - 
                            //ASCII  value of Delhii = 0,0,0,0,0,-1 
    char *def = "Delhii";   // i.e 0-111=-1
    int v = strcmp(abc, def);


    printf("Now the value is %d\n\n ", v); // return -ve value
                                        // if string is not equal
    return 0;
}