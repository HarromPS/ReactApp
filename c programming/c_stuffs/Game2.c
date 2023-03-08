#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// PROJECT: SNAKE WATER GUN

int SnakeWaterGun(char you, char computer)
{
    // conditions for different results

    if (you == computer) // condition for draw
    {
        return 0;
    }

    if (you == 's' && computer == 'w') // conditions for non draw
    {                                  // snake vs water
        return 1;
    }
    else if (you == 'w' && computer == 's') // water vs snake
    {
        return -1;
    }

    if (you == 's' && computer == 'g') // snake vs gun
    {
        return -1;
    }
    else if (you == 'g' && computer == 's') // gun vs snake
    {
        return 1;
    }

    if (you == 'g' && computer == 'w') // gun vs water
    {
        return -1;
    }
    else if (you == 'w' && computer == 'g') // water vs gun
    {
        return 1;
    }
}

int main()
{
    //  WRITE A 'C' PROGRAM CAPABLE OF PLAYING THIS GAME WITH YOU
    // YOUR PROGRAM SHOULD BE ABLE TO PRINT THE RESULT
    // AFTER YOU CHOOSE SNAKE/WATER/GUN.

    // Generating a random character
    char you, computer;
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 11 && number > 0)
    {
        computer = 's';
    }
    else if (number > 11 && number < 21)
    {
        computer = 'w';
    }
    else if (number > 21)
    {
        computer = 'g';
    }

    printf("Enter 's' for snake, 'w' for water, 'g' for gun\n");
    scanf("%c", &you);
    int result;
    result = SnakeWaterGun(you, computer);
    printf("You choose '%c' and computer choose '%c' \n", you, computer);

    if (result == 0)
    {
        printf("Game Draw\n");
    }
    else if (result == 1)
    {
        printf("You Win!\n");
    }
    else if (result == -1)
    {
        printf("You Lose\n");
    }
    return 0;
}
