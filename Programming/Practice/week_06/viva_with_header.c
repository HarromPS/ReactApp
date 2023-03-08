#include<stdio.h>
#include<stdlib.h>
#include"viva.h"

// Array, function & pointer calculator
float operation(float num1,float num2)
{   
    int x=0;
    printf("\n");
    while(x!=5)
    {
        printf("Enter\n'1' for Addition\n'2' for Substraction\n'3' for Multiplication\n'4' for Division\n'5' to Exit\n :: ");
        scanf("%d",&x);
        switch(x)
        {            
            case 1:
            printf("Addition (%.2f + %.2f) = %.2f\n\n",num1,num2,ADD(num1,num2));
            break;
            
            case 2:
            printf("Subtraction (%.2f - %.2f) = %.2f\n\n",num1,num2,SUB(num1,num2));
            break;
            
            case 3:
            printf("Multiplication (%.2f * %.2f) = %.2f\n\n",num1,num2,MULT(num1,num2));
            break;
            
            case 4:
            printf("Division (%.2f / %.2f) = %.2f\n\n",num1,num2,DIV(num1,num2));
            break;
            
            case 5:
            printf("Exit\n");
            break;
            
            default:
            printf("Invalid input\n");
        }
    }
}

int main()
{
    int n;
    printf("Enter the size of your array: ");
    scanf("%d",&n);
    float num1[n],num2[n];
    
    for(int i=0;i<n;i++)
    {
        printf("Enter %d pair of number\n",i+1);
        printf("Enter first number: ");
        scanf("%f",&num1[i]);
        printf("Enter second number: ");
        scanf("%f",&num2[i]);
        
        operation(num1[i],num2[i]);
    }
    
	return 0;
}
