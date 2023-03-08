#include<stdio.h>

int main(){
 
    // Quick quiz : Try the operators to perform with pointers
    // on another variable by using pointers in a seperate program 
    // demonstrate all the operations

    // 1] addn of a no. to pointer
    // 2] substn of a no. from a pointer
    // 3] substn of one pointer from another pointer
    // 4] comparision of two pointers

    // 1]
     int a=3;
     int *b=&a;
     
     printf("The addn of a no. to a pointer is %d\n",*b+a);
     // The output of the program is 6 --> *b=3, a+3, *b+a=6 

     int a1=5;
     int *b1=&a1;
     b1++;
     
     printf("The substn of a no. from a pointer is %d\n",*b1-a1);
     // The output of the program is -2 --> *b=5, a1=5, b1++= 


    
     int a2=6;
     int *b2=&a2;
     int *c2=b2;
     c2++;
     printf("The substn of one pointer fom another is %d\n",*b2-*c2);
     // The output of the program is 1 --> *b2=3, a2=6, *c2=adderss of a2 
     // c2++= 7

    // comparison of two pointer variables

    int arr[10];
    int *ptr=&arr[0]; // ptr is pointind to the first element
    ptr=ptr+2;         // ptr + 2 must be pointing to 3rd element
    if (ptr==&arr[2]){
        
  printf("This points to the same memory location\n");
    }
    else{
        printf("This do not points to the same memory location\n");
        
    }
    return 0; 
}