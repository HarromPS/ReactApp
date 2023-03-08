#include<stdio.h>

int main(){
    // here is a quick quiz 
    // write a program tp find the grade of a student

    int marks;
    printf("Enter your marks\n");
    scanf("%d",&marks);

    if(marks>=90){
    printf("Your grade is A");
    }
    else if(marks>=80 && marks<90){
        printf("Your grade is B");

    } 
    else if (marks>=70 && marks <80)
   {
        printf("Your grade is C");
     }
    else if(marks>=60 && marks<70 ){
        printf("Your garde is D");

    }
    else {
        printf("Your grade not found \n first go and give your incomplete test you ***");
    }
    

    return 0; 
}