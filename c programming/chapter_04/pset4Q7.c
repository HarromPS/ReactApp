#include<stdio.h>

int main(){
   
   //Q7 Write a program to print the sum of the multiplications
   //of the table
    int i,n,sum;
    printf("what table you want\n");
    scanf("%d",&n);
    
    for (i=1 ;i<=10;i++){
        
        printf("%d*%d=%d\n",n,i,i*n);
        sum=sum+(i*n);

    }
    
 printf("sum=%d\n",sum);
    return 0; 
}