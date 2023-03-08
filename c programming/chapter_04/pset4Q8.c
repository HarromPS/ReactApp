#include<stdio.h>

int main(){
 
    //Q8 Writ a program to find the factorial of a given no

    int i,n,factorial=1;
    printf("Enter a number To find is factorial\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        factorial *=i;
    }
    printf("The factorial of %d is %d\n",n,factorial);
    
    // Q9 repeat the above program using while loop
    int a=1,b,factoriall=1;
    printf("Enter any number to find the factorial\n");
    scanf("%d",&b);
   while(a<=b){
       factoriall*=a;
       a++;
   }
    printf("The factorial of %d is %d\n",b,factoriall);
    return 0; 

    
}