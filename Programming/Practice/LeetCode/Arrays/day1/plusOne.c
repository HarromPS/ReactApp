#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int *plusOne(int *digits, int digitsSize, int *returnSize)
{
    int k=0;
    digits[digitsSize-1]+=1;
    *returnSize+=1;
    
}
int main()
{
    int *arr;
    int size=sizeof(arr)/sizeof(int*);
    arr=plusOne(arr,size,&size);
    return 0;
}