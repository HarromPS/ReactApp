#include<stdio.h>

int main(){
    // Q5 Write a program to modify a file containing an integer to double its value
    // pre. file ==>2      new file==>4 

    FILE *ptr;
    int num;
    printf("Enter a integer\n");
    scanf("%d",&num);
    int b=2*num; 

    ptr=fopen("new.txt","r");   // file reads 2 initially
    ptr=fopen("new.txt","w");   // file will write its double after entering the integer

    fprintf(ptr,"%d\n",b);
    printf("Printed Successfully\n");
    return 0; 
}