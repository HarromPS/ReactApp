#include<stdio.h>

int main(){
 
    int i,n;
    printf("what table you want\n");
    scanf("%d",&n);
    
    for (i=n ;i;i--){
        printf("%d*%d=%d\n",n,i,i*n);

    }   return 0; 
}