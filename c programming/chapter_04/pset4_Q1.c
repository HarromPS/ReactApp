#include<stdio.h>

int main(){
    
    //Q1 write a program to print multiplication table of a
    // given number
    //like 2,4,6,8,10,etc.

    int i,n,sum;
    printf("what table you want\n");
    scanf("%d",&n);
    
    for (i=1 ;i<=10;i++){
        
        printf("%d*%d=%d\n",n,i,i*n);
        

    }
    
 
    return 0; 
}