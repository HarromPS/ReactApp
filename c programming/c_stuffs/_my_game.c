#include <stdio.h>
#include <stdlib.h> //library to generate random numbers
#include <time.h>

int Stone_Paper_Scissor(char you, char computer)
{
    // condition when both chooses the same
    if (you == computer)
    {
        return 0;
    }

    // conditions when both chooses differently
    if (you == 's' && computer == 'p')
    {
        return -1; // stone vs paper
    }
    else if (you == 'p' && computer == 's')
    {
        return 1;
    }

    if (you == 's' && computer == 'r')
    {
        return 1;
    }
    else if (you == 'r' && computer == 's')
    {
        return -1;
    }

    if (you == 'r' && computer == 'p')
    {
        return 1;
    }
    else if (you == 'p' && computer == 'r')
    {
        return -1;
    }
}

int main()
{
    char you, computer; // taking two players inputs
    int num;
    srand(time(0));
    num = rand() % 100 + 1;

    if (num > 0 && num < 33)
    {
        computer = 's'; // stone
    }
    else if (num >= 33 && num <66)
    {
        computer = 'p'; // paper
    }
    else if (num >= 66 && num<100)
    {
        computer = 'r'; // scissor
    }

    printf("Enter 's' for stone, 'p' for paper, 'r' for scissor\n");
    scanf("%c", &you); // user input

    int result;
    result = Stone_Paper_Scissor(you, computer); // calling the function

    printf("You choose '%c' & computer choose '%c'\n", you, computer);

    // announcing the result of the Game
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