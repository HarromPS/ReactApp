#include<stdio.h>
float average (int a, int b, int c);
int main(){
 //Q1 Write a program using functions to find average of three numbers

    int a,b,c;
    printf("Enter the value of first a\n");
    scanf("%d",&a);
  printf("Enter the value of first b\n");
    scanf("%d",&b);
  printf("Enter the value of first c\n");
    scanf("%d",&c);
 
  printf("The average is %f\n",average (a,b,c));
    return 0; 
}
float average (int a, int b, int c){
    float result=(float)(a+b+c)/3;
    return result;
}
