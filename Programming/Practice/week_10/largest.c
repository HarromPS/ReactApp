#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// Largest element in the array
int returnMax(int array[],int size)
{
    int max=0;
    for(int i=0;i<size;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    // We can manipulate the data of the array by passing 
    // reference of the array
    // array[0]=1212;
    return max;
}
int returnMin(int array[],int size)
{
    int min=array[0];
    for(int i=0;i<size;i++)
    {
        if(min>array[i])
        {
            min=array[i];
        }
    }
    // We can manipulate the data of the array by passing 
    // reference of the array
    // array[0]=1212;
    return min;
}
int main(){
    int array[]={122,12,33,4,456,676,7};
    int size=sizeof(array)/sizeof(int);
    printf("The maximum element in the array is :%d\n",returnMax(array,size));
    printf("The minimum element in the array is :%d\n",returnMin(array,size));

    // printf("The array is \n");
    // for(int i=0;i<size;i++)
    // {
    //     printf("%d ",array[i]);
    // }
    return 0; 
}