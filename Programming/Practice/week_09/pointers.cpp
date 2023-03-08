#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

// Pointers to arrays
// Array of Pointers
// Pointers to Strings
int main()
{
    // Pointer to arrays
    int array1[5];     // array of type integer
    int *ptr1;         // Pointer
    ptr1 = &array1[0]; // Pointer pointing to the first element
                       // of the array or holding the address of the first element
    ptr1 = array1;     // Both are same
    // Transversing the whole array using the pointer
    for (int i = 0; i < sizeof(array1) / sizeof(int); i++)
    {
        array1[i] = i * 2 + 1;
    }
    for (int i = 0; i < sizeof(array1) / sizeof(int); i++)
    {
        printf("%d ", *ptr1);
        ptr1++;
    }

    // Array of pointers
    int *ptr2[4];
    int a[2] = {1, 2}, b[4] = {3, 4, 5, 6},
        c[3] = {8, 9, 9}, d[5] = {10, 20};
    ptr2[0] = a;
    ptr2[1] = b;
    ptr2[2] = c;
    ptr2[3] = d;
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        // printf("%d ", *(ptr2[0]));
        // (*ptr2)++;
        // printf("%d ", *(ptr2[1]));
        // (*ptr2)++;
        (*ptr2)[i] = 3 + i;
    }
    for (int i = 0; i < sizeof(ptr2) / sizeof(int); i++)
    {
        printf("%d ", *(ptr2[i]));
        // (*ptr2)++;
    }
    printf("\n");
    // Pointer of Strings
    char num[] = "one";
    const char *nptr = "one"; // the value cannot be changed
    for (int i = 0; i < strlen(num) + strlen(num); i++)
    {
        if (i<strlen(num))
        {
            printf("%c ", num[i]);
        }
        // if(i==strlen(num))
        // {
        //     printf("\n");
        // }
        else
        {
            // *nptr='a';  // value cannot be changed
            printf("%c ", *(nptr));
            nptr++;
        }
    }
    return 0;
}