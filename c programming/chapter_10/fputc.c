#include <stdio.h>

int main() // fgetc write character by character
{
    FILE *ptr;
    ptr = fopen("sample123.txt", "w"); // we have to write

    putc('c', ptr);
    putc('a', ptr);
    putc('t', ptr);

    fclose(ptr);

    return 0;
}