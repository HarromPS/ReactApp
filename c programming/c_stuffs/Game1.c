#include <stdio.h>
#include <stdlib.h> //library to generate random numbers
#include <time.h>

int main()
{
    int number, guess, n_guesses = 1;
    srand(time(0));            // initialized --> time=0 sec
                               // returns 0 new every time
    number = rand() % 100 + 1; // gives the number between 1-100
                               /* hiding this line --> as this is answer line
                                 printf("the number is %d\n", number); */
                               // our random number is now generated

    // keep running the loop until the number is guessed
    // using do while loop
    do // it executes at least one time
    {
        printf("\nThere is a hidden number\nGuess between 1-100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Enter lower number please\n");
        }
        else if (guess < number)
        {
            printf("Enter higher number please\n");
        }
        else
        {
            printf("You found the hidden number in %d attempts\n", n_guesses);
        }
        n_guesses++;
    } while (guess != number);
    
    if (n_guesses > 5)
    {
        printf("\nNext time try to find in less attempts\n");
    }
    else 
    {
        printf("\nYou have a good sensing power\n");
    }

    return 0;
}