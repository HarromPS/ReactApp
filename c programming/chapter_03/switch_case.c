#include <stdio.h>

int main()
{
    // switch case is used to make choice betwen many alternatives
    // about different cases

    int rating;
    printf("Enter your rating (1-5)\n");
    scanf("&d", &rating);

    // we can use int,float,char in swich statement
    // here rating is used which is an integer

    switch(rating)
    {
        case 1:
        printf("Your rating is 1\n");
        break;

        case 2:
        printf("Your rating is 2\n");
        break;

        case 3:
        printf("Your rating is 3\n");
        break;

        case 4:
        printf("Your rating is 4\n");
        break;

         case 5:
        printf("Your rating is 5\n");
        break;

        default:
        printf("Invalid Rating\n");
        break;
    }

    return 0;
}