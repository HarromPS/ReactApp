#include <stdio.h>
void reverse(int *arr, int n)
{
    int temp=0;
    for (int i = 0; i < (n/2); i++) // for n = 7
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
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

    // when i am upto 3, my array is reversed 6, 5, 4, 3, 2, 1,
    // but when i move 4 5 6 it again reverses back
    // 1,2,3,4,5,6
    // i.e swapping twice
    
    int arr[] = {1, 2, 3, 4, 5, 6,7}; // program will reverse like
                                    // 1=6, 2=5, 3=4, 4=3, 5=2, 6=1
                                    // i.e 6 5 4 3 2 1

    reverse(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        printf("The value of %d element is %d\n", i, arr[i]);
    }

    return 0;
}