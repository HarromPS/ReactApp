#include <stdio.h> // INCOMPLETE
int positive_integers(int *arr)
{
    int count = 0;
    for (int j = 0; j < 5; j++)
    {
        if (arr[j] > 0)
        {

            printf("%d ", arr[j]);
            count=count+1;
        }
        return count;
    }
}

int main()
{

    // Q6 Write a program containing functions which counts
    // which counts the numbers of positive integer in an array

    // *arr[n]>0 then +ve
    // else -ve
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The positive integers in the array are: ");

    int result = positive_integers(arr);
    printf("\nThe total number of positive integers in the array is: %d\n", result);

    return 0;
}