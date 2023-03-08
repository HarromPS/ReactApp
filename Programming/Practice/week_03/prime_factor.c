#include <stdio.h>

// CL Practical 05:
// A positive integer entered through the keyboard, WAP to find
// the prime factors of the number. Modify the function to obtain
// prime factors recursively.

int prime(int *num)
{
    int list[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31,
                 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

    if (*num == 0)
    {
        return 0;
    }
    else
    {
        int i = 0;
        while (i < (sizeof(list) / sizeof(int)))
        {
            if (*num % list[i] == 0)
            {
                *num /= list[i];
                printf("%d ", list[i]);
            }
            else
            {
                i++;
            }
        }
    }
}
int main()
{

    int num;
    printf("Enter a number to find its prime factors \n");
    scanf("%d", &num);
    printf("The prime factors of %d is:\n", num);
    prime(&num);

    return 0;
}