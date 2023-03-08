#include <stdio.h>

int main()
{
    FILE *ptr;
    int num = 56;
    ptr = fopen("generate.txt", "w"); // we have write
    // generate.txt file is created

    fprintf(ptr, "The num is %d\n", num);   // use like printf
    fprintf(ptr,"This is the new text\n");
    // fprintf will write in the file not on screen

    fclose(ptr);
    return 0;
}