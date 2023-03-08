#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Binary Search using recursion
int BinarySearch(int *arr, int element, int *low, int *high)
{
    int mid;
    if ((*low <= *high))
    {
        mid = (*high - *low) / 2;

        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] > element)
        {
            *low = mid + 1;
            return BinarySearch(arr, element, low, high);
        }
        else
        {
            *high = mid - 1;
            return BinarySearch(arr, element, low, high);
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 22, 34, 40, 45, 47, 52, 67, 299};
    int element, low, high;
    int size = sizeof(arr) / sizeof(int);
    printf("%d",size);
    low = 0, high = size - 1;
    printf("Enter the element to search in the array: ");
    scanf("%d", &element);
    int result = BinarySearch(arr, element, &low, &high);
    if (result == -1)
    {
        printf("The element not found\n");
    }
    else
    {
        printf("The element %d is found at position %d\n", element, result);
    }
    return 0;
}