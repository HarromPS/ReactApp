#include <stdio.h>
// DS Practical: WAP on stack operation and do
// push() & pop() operation on integers

int push(int *arr, int *top, int *element, int *n)
{
    // printf("%d \n", (sizeof(arr) / sizeof(int)));
    //  size==> because * point to its first element
    printf("%d ", *n);
    printf("\nTop is %d \n", *top);
    if (*top >= *n - 1)
    {
        printf("\nStack limit reached & you cannot add more element\n");
        return 0;
    }
    else
    {
        printf("\n\nElement pushed: %d", *element);
        int x = *top + 1;
        arr[x] = *element;
        *top += 1;
        printf("\nTop is %d \n", *top);
        return 1;
    }
    // int y = pop(arr, top);
}
int pop(int *arr, int *top)
{
    if (*top < 0)
    {
        printf("Stack is underflow means all elements are out\n");
    }
    else
    {
        printf("\n\nElement popped: %d", arr[*top]);
        arr[*top] = 0;
        int x;
        x = *top - 1;
        printf("\nTop is %d \n", x);
    }
}
int status(int *arr, int *n)
{
    printf("\nThe elements in the stack are: \n");
    for (int i = 0; i < *n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n, element; // element which is to be pushed to the stack;
    printf("Enter the size of your stack: ");
    scanf("%d", &n);
    printf("The size of your stack is: %d\n", n);
    int arr[n];
    int top = -1; // count of the topmost number or the index of top element
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
    printf("Initially the elements in the stack\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    int option;
    while (option != 4)
    {
        printf("\n\nEnter\n1) push()\n2) pop()\n3) Status\n4)Exit\n\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\nEnter the element to push in the stack\n");
            scanf("%d", &element);
            push(arr, &top, &element, &n);
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