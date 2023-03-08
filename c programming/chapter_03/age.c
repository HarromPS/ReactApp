#include<stdio.h>

int main(){
 int age,vip=1;
 printf("Enter your age:\n");
 scanf("%d",&age);
 {
 if((age<=50 && age>=18) || !(vip==1)){
     printf("You are eligible, you can drive \n");
     }
    else{
        printf("You cannot drive \n");
    }
 }
    return 0; 
}