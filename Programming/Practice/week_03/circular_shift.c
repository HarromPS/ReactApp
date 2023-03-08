#include <stdio.h>

// CL Practical 05:
// Given 3 variables x=10,y=20,z=30. WAP to circular
// shift their values use recursion.

int right_shift(int *x, int *y, int *z, int *n,int* times){
    int temp;
    // int times = 2;
    if (*n < *times){
        temp = *z;
        *z = *x;
        *x = *y;
        *y = temp;
        *n += 1;
        return right_shift(x, y, z, n,times);
    }
    else{
        return 0;
    }
}
int left_shift(int *x, int *y, int *z, int *n, int *times)
{
    int temp;
    // int times = 2;
    if (*n < *times)
    {
        temp = *z;
        *z = *y;
        *y = *x;
        *x = temp;
        *n += 1;
        return left_shift(x, y, z, n, times);
    }
    else
    {
        return 0;
    }
}
int main(){
    int n = 0;
    int x, y, z, times;
    printf("Enter values for 3 variables: \n");
    scanf("%d %d %d", &x, &y, &z);
    printf("Enter no. of circular shifts: \n");
    scanf("%d", &times);
    printf("Before circular shift\n");
    printf("x= %d, y= %d, z= %d", x, y, z);
    // One type of shift at a time because values are getting modified
    right_shift(&x, &y, &z, &n,&times);
    printf("\nAfter %d right circular shift\n",times);
    printf("x= %d, y= %d, z= %d", x, y, z);
    return 0;
}

 // left_shift(&x, &y, &z, &n, &times);
    // printf("\nAfter %d left circular shift\n", times);
    // printf("x= %d, y= %d, z= %d", x, y, z);