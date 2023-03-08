// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// // #include <stdlib.h>

// // int main()
// // {

// //     // Print ten space-separated integers in a single line denoting the frequency of each digit from 0 to 9.

// //     char *str;
// //     scanf("%[^\n]", str);
// //     int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
// //     // printf("%d",strlen(str));
// //     // printf("%s",str);

// //     int count;
// //     for (int i = 0; i < strlen(str); i++)
// //     {
// //         count = 0;
// //         for (int j = 0; j < strlen(str); j++)
// //         {
// //             if (str[i] == num[j])
// //             {
// //                 count++;
// //                 str[i] = count;
// //             }
// //             else
// //             {
// //                 str[i] = 0;
// //             }
// //         }
// //     }

// //     for (int i = 0; i < strlen(str); i++)
// //     {
// //         printf("%d ", str);
// //     }
// //     // printf("0 2 1 0 1 1 1 1 0 0 ");
// //     return 0;
// // }
//////////////////////////
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

// int S(int n, int a, int b, int c) {
//     int sum=0;
//     if(n==0)
//     {
//         return 0;
//     }
//     else
//     {
//         sum= S(n-1,a,b,c)+S(n-2,a,b,c)+S(n-3,a,b,c);
//         return sum;
//     }
// }

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = S(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

int S(int n, int a, int b, int c) {
    
    int sum_n;
    if(n == 1)
    {
        sum_n = a;
    }
    else if(n == 2)
    {
        sum_n = b;
    }
    else if(n == 3)
    {
        sum_n = c;
    }
    else 
    {
        sum_n = S(n-1, a, b, c) + S(n-2, a, b, c) +   S(n-3, a, b, c);
    }
    return sum_n;
}