#include<stdio.h>

int main(){
    // "? is a ternary operator"
    //Syntax is like
    // condition ? statementA-if-true : statementB-if-false
    //so if the condition is true it will execute statmentA
    // if the condition is false it will execute statementB

    int num;
    printf("\nDo you think the number you are entring is greater than 50?\nThen enter a number\n");
    scanf("%d",&num);

    (num>50)?printf("You are right"): printf("See I was right \nPlease think on this");
    // condition    TRUE                FALSE
 
    return 0; 
}