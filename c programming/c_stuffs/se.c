//////////////////////////////////////////////////////////////////////////////

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */

//     char str[10];
//    /// char str2[10];
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%s", &str[i-1]);

//     }

//      for (int i = 1; i <= n; i++)
//     {

//         printf("%c\n",str[i-1]);
//     }

//     return 0;
// // }
// 
// int main(){
//     int n;
//     printf("Enter the size of your array\n");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the elements of your array\n");
//     for(int i=0;i<n;i++){
//         printf("Enter %d element: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("The elements you entered\n");
//     for(int i=0;i<n;i++){
//         printf("%d position= %d \n",i+1,arr[i]);
//     }
//     new_element(arr,n);
//      printf("The array with changed element:\n");
//     for(int i=0;i<n;i++){
//         printf("%d position= %d \n",i+1,arr[i]);
//     }
//     return 0;
// }
////////////////////////////////////////////////////

// 
//////////////////////////////////
// dm 4 Q2

// #include <stdio.h>
// // DM PRACTICAL 4:
// // Q2 Write a program given the input set A & B
// // find A U B, A interscion B, A-B.
// int main()
// {
//     int A[5] = {1, 2, 3, 4, 5};
//     int B[5] = {2, 3, 4, 1, 2};

//     printf("The inputs are: \n'A' 'B'\n");
//     for (int i = 0; i < 5; i++){
//         printf("%d  %d\n", A[i], B[i]);
//     }
//     printf("The Intersection of A & B is: \n");
//     for (int i = 0; i < 5; i++){
//         for (int j = 0; j < 5; j++){
//             if (A[i] == B[j])
//             {
//                 printf("%d ", B[j]);
//             }
//         }
//     }
//     printf("\n");
//     int n;
//     int C[10];
//     int found;
//     for (int i = 0; i < 5; i++){
//         C[i] = A[i];
//     }
//     for (int i = 0; i < 5; i++){
//         found = 0;
//         for (int j = 0; j < 5; j++){
//             if (B[i] == A[j]){
//                 found = 1;
//                 break;
//             }
//             else if (!found){
//                 C[n++] = B[i];
//             }
//         }
//     }
//     printf("\nThe Union of A & B is: \n");
//     for (int i = 0; i < 6; i++){
//         printf("%d ", C[i]);
//     }
//     printf("\n");
//     int D[5];
//     int count = 0;
//     for (int i = 0; i < 5; i++){
//         D[i] = A[i];
//     }
//     printf("\nA - B is: \n");
//     for (int i = 0; i < 5; i++){

//         for (int j = 0; j < 5; j++){
//             if (A[i] == B[j]){
//                 A[i] = 0;
//                 count++;
//                 break;
//             }
//         }
//     }
//     A[2]=0;
//     for (int i = 0; i < 5; i++{
//         if (A[i] != 0){
//             printf("%d ", A[i]);
//         }
//     }
//     return 0;
// }
// //////////////////////////////////////

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {

//     char *s;
//     s = malloc(1024 * sizeof(char));
//     scanf("%[^\n]", s);
//     s = realloc(s, strlen(s) + 1);
//     // Write your logic to print the tokens of the sentence here
//     for (int i = 0; i < strlen(s); i++)

//     {
//         // this is c
//         if (s[i] == ' ')
//         {
//             printf("\n");
//         }
//         else
//         {
//             {
//                 printf("%c", s[i]);
//             }
//         }
//     }

//     return 0;
// }

/////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

// DM: Practical 04
// WAP to find the prime factors of a number
// //
// int main()
// {
//     int n;
//     printf("Enter a number to find its prime factors:\n");
//     scanf("%d", &n);
//     int prime_arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};

//     printf("The prime factors of %d is:\n");
//     while (n != 1)
//     {
//         for (int i = 0; i < sizeof(prime_arr); i++)
//         {
//             if (n % prime_arr[i] == 0)
//             {
//                 n=n/prime_arr[i];
//                 printf("%d ", prime_arr[i]);
//             }
//         }
//     }
//     return 0;
// }
////////////////////////////////////////////////////
#include<stdio.h>

// DM Practical 04:
// WAP to find the GCD(Greater common divisor) of a number
int main()
{
    int x, y;
    printf("Enter two numbers: \n");
    printf("Enter 1st number: \n");
    scanf("%d",&x);
    printf("Enter 2nd number: \n");
    scanf("%d",&y);

    printf("The GCD of (x,y) is: ",x,y);
    while(x!=0)
    {
        x=x%y;
        if(y!=0)
        {
            y=x;
            printf("%d\n",y);
        }
    }
    return 0;
}