#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct Q
{
    int data;
    struct Q *next;
};
typedef struct
{
    // ADTs of the Queue stack implementation using Queue
    /// Not mentioned any size of the Stack previously
    // So using linked list
    struct Q *q;
} MyStack;

MyStack *myStackCreate()
{
    // Creating node using malloc
    MyStack *top = (MyStack *)malloc(sizeof(MyStack) * 1);
    top->q = NULL;
    return top;
}

MyStack *myStackPush(MyStack *top, int x)
{
    // one time condition
    if (top->q == NULL)
    {
        top->q = (struct Q *)malloc(sizeof(struct Q) * 1);
        top->q->data = x;
        top->q->next = NULL;
    }
    else
    {
        // check if the stack is full or not
        MyStack *temp = (MyStack *)malloc(sizeof(MyStack) * 1);
        temp->q = (struct Q *)malloc(sizeof(struct Q) * 1);
        if (temp == NULL)
        {
            return top;
        }
        else
        {
            temp->q->data = x;
            temp->q->next = top->q;
            top->q = temp->q;
        }
    }
    return top;
}

int myStackPop(MyStack *top)
{
    if (top->q == NULL)
    {
        return 0;
    }
    else
    {
        int val = top->q->data;
        top->q = top->q->next;
        return val;
    }
}

int myStackTop(MyStack *top)
{
    return top->q->data;
}

bool myStackEmpty(MyStack *top)
{
    if (top->q == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void myStackFree(MyStack *top)
{
    free(top);
}
void print(MyStack *top)
{
    if (top == NULL)
    {
        return;
    }
    while (top->q->next != NULL)
    {
        printf("%d ", top->q->data);
        top->q = top->q->next;
    }
    printf("\n");
}
int main()
{
    MyStack *obj = myStackCreate();
    obj = myStackPush(obj, 1);
    obj = myStackPush(obj, 2);
    obj = myStackPush(obj, 3);
    obj = myStackPush(obj, 4);
    print(obj);
    int param_2 = myStackPop(obj);
    int param_3 = myStackTop(obj);
    bool param_4 = myStackEmpty(obj);
    myStackFree(obj);

    return 0;
}