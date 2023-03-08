#include<stdio.h>

int main(){
   //C program to find simple interest
   
   int sI,principle,rate,time;
   printf("Write principle, rate ,time\n"); //byaj
   scanf("&d%d%d",&principle,&rate,&time);
   sI=(principle*rate*time)/100;
   printf("The Simple Interest calculated is %d\n",sI);

    return 0; 
}