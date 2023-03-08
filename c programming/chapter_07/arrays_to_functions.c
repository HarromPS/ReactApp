#include <stdio.h>
// void printarray(int *ptr, int n) // function prototype
// {
//     for (int i = 0; i < n; i++)
//     {
//     printf("The value of element %d is %d \n", (i + 1), *(ptr + i));
//     // function defination

//     }

// }

void printarray(int ptr[], int n) // function prototype
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d \n", (i + 1), ptr[i]);
        // function defination
    }
    ptr[2]=33;  // This will change the value in arr array of main functn
}

int main()
{
    int arr[] = {34,23,4,5423,23 };
    printarray(arr, 5); // when no. > 5 it will print garbage value
    // function call
    printf("%d\n",arr[2]);
    return 0;
}