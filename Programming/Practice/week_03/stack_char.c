#include <stdio.h>
#include<string.h>
// DS Practical: WAP on stack operation and do
// push() & pop() operation on characters

int push(char *arr, int *top, char *character, int *n)
{
    // printf("%d \n", (sizeof(arr) / sizeof(char)));
    //  size==> because * point to its first element
    printf("%d ", *n);
    printf("\nTop is %d \n", *top);
    if (*top >= *n-1)
    {
        printf("\nStack limit reached & you cannot add more element\n");
    }
    else
    {
        printf("\n\nElement pushed: %c", *character);
        int x = *top + 1;
        arr[x] = *character;
        *top += 1;
        printf("\nTop is: %d \n", *top);
    }
}
int pop(char *arr, int *top)
{
    if (*top < 0)
    {
        printf("Stack is underflow means all elements are out\n");
    }
    else
    {
        printf("\n\nElement popped: %c", arr[*top]);
        arr[*top] = 0;
        int x;
        x = *top - 1;
        printf("Top is: %d \n", x);
    }
}
int status(char *arr, int *n)
{
    printf("\nThe elements in the stack are: \n");
    for (int i = 0; i < *n - 1; i++)
    {
        printf("%c ", arr[i]);
    }
}
char main()
{
    char character; // element which is to be pushed to the stack;
    int n;          // size of array
    printf("Enter the size of your stack: ");
    scanf("%d", &n);
    printf("The size of your stack is: %d\n", n);
    char arr[n];        // character array 
    int top = -1; // count of the topmost number or the index of top element
    for (int i = 0; i < n; i++)
    {
        arr[i] = '0';
    }
    printf("Initially the elements in the stack are==>\n");
    for (int i = 0; i < n; i++)
    {
        printf("%c ", arr[i]);
    }
    int option;
    while (option != 4)
    {
        printf("\n\nEnter\n1) push()\n2) pop()\n3) Status\n4)Exit\n\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\nEnter a character to push in the stack\n");
            scanf("%s", &character);
            push(arr, &top, &character, &n);
            break;
        case 2:
            pop(arr, &top);
            break;
        case 3:
            status(arr, &n);
            printf("\n");
            break;
        case 4:
            printf("FINISH");
            break;
        default:
            printf("End!");
        }
    }
    return 0;
}