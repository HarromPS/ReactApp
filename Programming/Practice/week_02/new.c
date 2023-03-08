#include <stdio.h>
#include <string.h>

// CL Practical 05: Functions & Pointers
// Q1 WAP to obtain prime factors of a number .
// MOdify the function suitably to obtain the prime factors recursively.

// int prime(int* num)
// {
//     int prime1[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 47, 53};
//     if (*num == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         for (int i = 0; i < sizeof(prime1); i++)
//         {
//             if (*num % prime1[i] == 0)
//             {
//                 *num /= prime1[i];
//                 printf("%d ", prime1[i]);
//             }
//         }
//     }

//     return prime(*num); // modified value
// }
int main()
{

    int num;
    printf("Enter a number to find its prime factors\n");
    scanf("%d", &num);
    printf("The Prime Factors of the number entered is: ");

    // int result = prime(&num);
    // printf("%d\n", result);

    return 0;
}