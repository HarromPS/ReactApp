#include <stdio.h>

int main()    // fgetc reads file character by character
{
    FILE *ptr;
    ptr = fopen("sample111.txt", "r"); // we have to open the file
                                       // char c=fgetc(ptr);
    printf("The value of character is %c\n", fgetc(ptr));
    printf("The value of character is %c\n", fgetc(ptr));
    printf("The value of character is %c\n", fgetc(ptr));
    printf("The value of character is %c\n", fgetc(ptr));
    printf("The value of character is %c\n", fgetc(ptr));
    printf("The value of character is %c\n", fgetc(ptr));
    printf("The value of character is %c\n", fgetc(ptr));
    printf("The value of character is %c\n", fgetc(ptr));
    printf("The value of character is %c\n", fgetc(ptr));
    printf("The value of character is %c\n", fgetc(ptr));
    printf("The value of character is %c\n", fgetc(ptr));
    fclose(ptr);

  

    return 0;
}