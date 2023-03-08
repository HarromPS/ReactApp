#include<stdio.h>
#include<stdlib.h>

int main(){
    // Q2 Use the array in Q1 to store 6 integers created by the user

    int *ptr;
    // creating a dynamic memory uing malloc() from Q1
    ptr = (int *)malloc(6 * sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        printf("Enter %d element:\n", i + 1);
        scanf("%d", &ptr[i]);
    }

       for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element added is %d\n", i + 1, ptr[i]);
    }

    // TO CHECK THE CONTINOUS ALLOCATION OF MEMORY
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("The value of %d element added is %d\n", i + 1, &ptr[i]);
    // }
    return 0;
}

