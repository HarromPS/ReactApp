#include<stdio.h>

int main(){
    
    // Q4 Repeat the que 3 for a general input provided
    // by the user using scanf

     int mul2[10], n;
    printf("Enter a number to generate a table\n");
    scanf("%d", &n);
    for (int j = 0; j < 10; j++)
    {

        mul2[j] = n * (j + 1);
        printf("The table of %d X %d\n", n, mul2[j]);
    } 
 
    return 0; 
}