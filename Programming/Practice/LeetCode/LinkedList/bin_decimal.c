#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct Node
{
    int data;
    struct Node *next;
};
int getDecimalValue(struct Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    int decimal = 0;
    struct Node *p = head;
    // USING BIT MANIPULATION
    // while (p != NULL)
    // {
    //     decimal = (decimal << 1) | p->data;
    //     p = p->next;
    // }
    // BINARY REPRESENTATION
    while (p != NULL)
    {
        decimal = 2 * decimal + p->data;
        p = p->next;
    }

    return decimal;
}
struct Node *reverseList(struct Node *head)
{
    struct Node *newhead = NULL;
    while (head)
    {
        struct Node *next = head->next;
        head->next = newhead;
        newhead = head;
        head = next;
    }
    return head;
}

int main()
{
    // 1,0,0,1,0,0,1,1,1,0,0,0,0,0,0
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = second;

    second->data = 0;
    second->next = third;

    third->data = 1;
    third->next = NULL;
    printf("%d\n", getDecimalValue(head));
    return 0;
}