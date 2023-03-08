#include <stdio.h>
#include <stdlib.h>


// A program on array queue to add new element at end and remove
// element at first

int repeat(int arr[])   // function to add any length of elements 
{
    int p;
    printf("\nEnter '0' to end the process OR Enter a new element\n");
    scanf("%d",&p);

    if (p == 0)       // base condition to stop function running endless
    {
        printf("FINISH!");
        return 0;
    }
    else
    {
        
        for (int i = 0; i < 4; i++)
        {
            arr[i] = arr[i + 1];
            if (i == (4 - 1))
            {
                arr[4 - 1] = p;
            }
        }
        printf("The new array is: \n");
        for (int i = 0; i < 4; i++)
        {
            printf("%d ",arr[i]);
        }
        return repeat(arr);         // using recursion to repeat the above process
    }
}
int main()
{
    int arr[4];
    printf("There are 4 elements in your array \n");
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < 4; i++)     // taking the inputs of array
    {
       printf("%d: ",i + 1);
        scanf("%d",&arr[i]);
    }
    printf("The elements you entered \n");

    for (int i = 0; i < 4; i++)      // printing the entered elements
    {
        printf("%d ",arr[i]);
    }
    // int x;
    // printf("\nEnter the new element your array\n");
    // scanf("%d",&x);                       // enter new element i.e at last
    //                                 // and replacing 1st element with other
    // for (int i = 0; i < 4; i++)
    // {
    //     arr[i] = arr[i + 1];
    //     if (i == (4 - 1))
    //     {
    //         arr[4 - 1] = x;
    //     }
    // }
    // printf("The new array is: \n");    // printing updated array
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    repeat(arr);        // calling the function

    return 0;
}