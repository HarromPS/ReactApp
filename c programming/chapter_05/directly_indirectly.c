#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main()
{   // direct and indirect call

    goodmorning(); // function directly called
    return 0;
}

void goodmorning()
{
    printf("Good Morning boy\n"); // set of instructions or step wise execution
    goodafternoon();              // godmorning is called above but goodmorning()
                                  // is also calling goodafternoon function
} // this is indirectly called

void goodafternoon()
{
    printf("Good Afternoon boy\n");
    goodnight(); // goodafternoon is called above but goodafternoon()
                 // is also calling goodnight function
                 // this is indirectly called
}

void goodnight()
{
    printf("Good Night boy\n");
}