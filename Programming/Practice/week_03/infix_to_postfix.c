#include <stdio.h>
// Globally defining top
int top = -1; // top<1

// DS Practical :
// Convert a infix expression to postfix expression

// Algorithm to push an element in the array
char push(int *arr, int *push_element)
{
    if (top >= sizeof(arr))
    {
        printf("Stack is full\n");
    }
    else
    {
        top += 1;
        arr[top] = *push_element;
    }
}

// Algorithm to pop an element in the array
int pop(int *arr)
{
    int x = 0;
    if (top < 1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        x = arr[top];
        top -= 1;
    }
    return x;
}

// Algorithm to show status of elements in the array
char status(int *arr)
{
    int free;
    if (top < 1)
    {
        printf("Stack is Empty\n");
    }
    else if (top >= sizeof(arr))
    {
        printf("Stack is Full\n");
    }
    else
    {
        for (int i = 0; i < sizeof(arr); i++)
        {
            printf("%d ", arr[i]);
        }
    }
}
int main()
{
    char arr[1];
    int switch_case;
    char push_element;
    printf("The elements in the array are:\n");
    for(int j=0;j<4;j++)
    {
        printf("%d ",arr[j]);
    }
    printf("\nsize of array: %d",sizeof(arr));

    do
    {
        printf("\nEnter\n1) Push\n2) Pop\n3) Status\n4) Exit\n");
        scanf("%d", &switch_case);
        switch (switch_case)
        {
        case 1:
            printf("Push operation \n");
            printf("Enter a new element:\n");
            scanf("%c", &push_element);
            push(arr, push_element);
            break;

        case 2:
            printf("Pop operation\n");
            pop(arr);
            break;

        case 3:
            printf("Status operation\n");
            status(arr);
            break;

        case 4:
            printf("Exit operation\n");
            break;

        default:
            printf("\n");
        }

    } while (switch_case != (4));

    return 0;
}