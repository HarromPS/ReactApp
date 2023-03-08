#include<stdio.h>

int main(){
    
    // Write a program to accept marks of five students in a 
    // array and print them to the screen

    int marks[5];
    for(int i=0;i<5;i++){
       
    printf("Enter a value for marks %d \n",i+1); // to show from 1-5

    scanf("%d", &marks[i]);


    }
     for(int i=0;i<5;i++){
       
    printf("Value for marks for student %d is %d \n",i+1,marks[i]); 


    }
    
 
    return 0; 
}