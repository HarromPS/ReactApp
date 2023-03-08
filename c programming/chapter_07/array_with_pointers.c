#include <stdio.h>

int main()
{

    //  Accessing arays using pointers

    int marks[5]; // 0,1,2,3,4 = 5
    int *ptr;
    // ptr = &marks[0]; 
    // 1st element of the array

    ptr=marks;  // ptr=marks <==> ptr = &marks[0]; 
    
  
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks of student %d\n", i + 1);
        scanf("%d", ptr); // taking the value for pointer
                          // not their adderess
        ptr++;
        if (*ptr == marks[i])
            printf("count\n");
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The marks of student %d is %d \n", i + 1, marks[i]);
    }

    return 0;
}