#include <stdio.h>

int main() // fgetc reads file character by character
{
    FILE *ptr;
    char c;
    c=fgetc(ptr);
    ptr = fopen("sample171.txt", "r"); // we have to write

   while(c!=EOF)
   {
        printf("%c",c);
       c=fgetc(ptr);
   }

    fclose(ptr);

    return 0;
}