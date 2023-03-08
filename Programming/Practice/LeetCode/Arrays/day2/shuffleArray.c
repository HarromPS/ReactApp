#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int *array;
    int size;

} Solution;

Solution *solutionCreate(int *nums, int numsSize)
{
    Solution *soln = (Solution *)calloc(sizeof(Solution),1);
    soln->size = numsSize;
    soln->array = (int *)calloc(sizeof(int) , numsSize);
    for (int i = 0; i < soln->size; i++)
    {
        // copy the elements of the array coming as the argument
        soln->array[i] = nums[i];
    }
    
    // return the object of struct Solution
    return soln;
}

int *solutionReset(Solution *obj, int *retSize)
{
    /*
        About the parameters 
        1) *obj -> the reference of the object of the struct Solution
        2) the reference of the integer from main function as int retSize;
            int * parameter=solutionReset(obj, &retSize);
    */
    // return the size of the retSize
    *retSize=obj->size;
    int* tempArray=(int*)calloc(sizeof(int),obj->size);
    
    //copy the array elements of the original array to the temp array 
    for (int i=0;i<obj->size;i++)
    {
        tempArray[i]=obj->array[i];
    }
    
    return tempArray;
}

int *solutionShuffle(Solution *obj, int *retSize)
{
    // In order to shuffle the array we need to randomize the array elements
    int r = 0, tempSize = obj->size, temp=0;

    int* tempArray2=(int*)calloc(sizeof(int),obj->size);
    
    //copy the array elements of the original array to the temp array 
    for (int i=0;i<obj->size;i++)
    {
        tempArray2[i]=obj->array[i];
    }
    
    // generating an random index in range
    for (int i = obj->size-1; i >= 0; i--)
    {
        r = (rand() % (tempSize));

        // swapping the array elements to get the shuffled array
        temp = tempArray2[i];
        tempArray2[i] = tempArray2[r];
        tempArray2[r] = temp;
        tempSize--;
    }
    *retSize=obj->size;
    return tempArray2;
}

void solutionFree(Solution *obj)
{
    free(obj->array);
    free(obj);
}

void print(int *s,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",s[i]);
    }
}
int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    int numsSize = sizeof(nums) / sizeof(int);
    Solution *obj= solutionCreate(nums, numsSize);
    int retSize=0;

    int* retSize1 = solutionReset(obj, &retSize);

    print(retSize1,retSize);
    retSize1 = solutionShuffle(obj, &retSize);
    print(retSize1,retSize);

    solutionFree(obj);
    return 0;
}
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(int);
//     int size1 = size;
//     int r;
//     for (int j = 0; j < 6; j++)
//     {
//         size1=size;
//         for (int i = size - 1; i >= 0; i--)
//         {
//             r = (rand() % size1);
//             size1--;
//             swap(&arr[i], &arr[r]);
//             printf("%d ", arr[i]);
//         }
//         printf("\n");
//     }

//     return 0;
// }