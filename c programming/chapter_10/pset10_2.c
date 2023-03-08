#include <stdio.h>

int main()
{
    // Q2 Write a program to generate multiplication table of a given number in text
    // format. Make sure that in the file is readable and well formatted.

    FILE *ptr;
    int num;
    printf("Enter the number you want the table of: \n");
    scanf("%d", &num);
    ptr =fopen("table.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", num, (i + 1), num * (i + 1));
    }
    fclose(ptr);
    printf("Successfully generated table of %d to table.txt\nCheck it!",num);
    return 0;
}