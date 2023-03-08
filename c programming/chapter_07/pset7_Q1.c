#include<stdio.h>

int main(){
 
    // Q1 Create an array of 10 numbers. Verify using pointer arithmetics that (ptr+2)
    // points to the third element where ptr is a pointer pointing to the 
    // first element of the array

    // int arr[10]={1,2,3,4,5,6,7,8,9,10};
    // int *ptr=&arr[0];   // or *ptr=arr;
    // printf("The third element of the array is %d\n",*(ptr+2));
    //above code is also a correct solution

    int arr[10];
    int *ptr=&arr[0];   // storing the address of 
    ptr=ptr+2;

    if(ptr==&arr[2]){
        printf("This point to the same memory location\n");
    }
    else{
        printf("This do not point to the same memory location\n");
        
    }
    return 0; 
}