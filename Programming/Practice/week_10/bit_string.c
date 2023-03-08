#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// DM Practical 08: WAP to find the no of bit string of length n
// containing two consecutive zeros using recurrance relation
int Count(int s[], int size, int i, int *count)
{
    if (i > size)
    {
        return *count;
    }
    if ((s[i] || s[i + 1]) == 0)
    {
        *count += 1;
        ++i;
        return Count(s, size, i, count);
    }
    else
    {
        ++i;
        return Count(s, size, i, count);
    }
    // return *count;
    printf("Count : %d", *count);
}
int main()
{
    printf("Enter the length of string bits: ");
    int size;
    scanf("%d", &size);
    int string[size];
    int i = 0, count = 0;
    printf("Enter a string of bits:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d: ", i + 1);
        scanf("%d", &string[i]);
    }
    printf("The bit string is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", string[i]);
    }
    printf("\nThe number of bit string containing two consecutive zeros are: \n==>");
    printf("%d \n", Count(string, size, i, &count));
    return 0;
}