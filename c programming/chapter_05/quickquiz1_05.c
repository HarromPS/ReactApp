#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main()
{
    // quick quiz : Write a programs with three functions
    // 1 Good morning function which prints "Good Morning"
    // Good morning function which prints "Good Afternoon"
    // Good morning function which prints "Good Night"

    printf("Good Morning function\n");
   goodmorning(); // function call
   
    printf("Good Afternoon function\n");
   goodafternoon(); // 

    printf("Good Night function\n");
    goodnight();

    return 0;
}

void goodmorning()
{
    printf("Good Morning\n"); //set of instructions or step wise execution
    
}


void goodafternoon()
{
    printf("Good Afternoon\n");
    
}


void goodnight()
{
    printf("Good Night\n");
    
}