#include <stdio.h>
void reverse(int *arr, int n)
{   
    int temp=0;
    for (int i = 0; i < (n/2); i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];    // another meaning for n-i-1 ==> 
        arr[n - i - 1] = temp;

        // when i=0, n-i-1 ==> 6-0-1=5
        // where 0 is 1st and 5 is 6th element in arr
    }
}

int main() // function will not reverse
{

    // Q5 Write a program containing a function which reverses
    // the array passed to it

    // reversing of array
    // e.g array[]={1,2,3,4,5,6};
    // then reverse order will be{6,5,4,3,2,1}

    int arr[] = {1, 2, 3, 4, 5, 6};
    reverse(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is %d\n", i, arr[i]);
    }

    return 0;
}