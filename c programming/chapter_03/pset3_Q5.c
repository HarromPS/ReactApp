#include<stdio.h>

int main(){
    
    //Q5 write a program to find out whether a character entered by 
    //the user is a lowercase or not

    // 97-122=a-z ASCII characters
    
    char ch;
    printf("Enter a character\n");
    scanf("%c",&ch);

    if(ch>=97 && ch<=122){
        printf("Your entered character %c is a lowercase",ch);
    }
    else{    
    printf("Your entered character %c is not a lowercase\nIt is a upper case",ch);
    }
    
    
    
    return 0; 
}