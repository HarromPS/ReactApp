#include<stdio.h>

int main(){
        //Q1 Write a program to read three integers from the file

        FILE *a;
        a=fopen("sample.txt","r");
        int num1,num2,num3;
        fscanf(a,"%d %d %d\n",&num1,&num2,&num3);     // we don't use use equal to sign for fscanf
        printf("The values of num1,num2,num3 is %d %d %d\n",num1,num2,num3);
        fclose(a);
 
    return 0; 
}