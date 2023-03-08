#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void TransversalLL(struct Node *head)
{
    int i = 0;
    if (head == NULL)
    {
        printf("Linked list is empty\n");
    }
    printf("The elements in the linked list are:: \n");
    while (head != NULL)
    {
        printf("(%d)->", head->data);
        head = head->next;
        i++;
    }
    printf("NULL\n");
}
struct Node *deleteDuplicates(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    do
    {
        if (p->data == q->data)
        {
            p->next = q->next;
            // free(q);
            q = p->next;
        }
        else{
        p = p->next;
        q = q->next;
        }
    }while (q->next != NULL);
    if (p->data == q->data)
    {
        p->next = q->next;
        // free(q);
    }
    return head;
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth4 = (struct Node *)malloc(sizeof(struct Node));

    // Linking nodes
    head->data = 1;
    head->next = second;

    // Linking nodes
    second->data = 1;
    second->next = third;

    // Linking nodes
    third->data = 2;
    third->next = fourth;

    // Linking nodes
    fourth->data = 3;
    fourth->next = fourth1;

    fourth1->data = 3;
    fourth1->next = fourth2;

    fourth2->data = 4;
    fourth2->next = fourth3;

    fourth3->data = 5;
    fourth3->next = fourth4;

    fourth4->data = 5;
    fourth4->next = NULL;

    TransversalLL(head);
    deleteDuplicates(head);
    TransversalLL(head);

    // free(head);
    // free(second);
    // free(third);
    // free(fourth);

    return 0;
}