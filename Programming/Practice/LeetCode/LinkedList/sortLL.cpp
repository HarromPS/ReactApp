#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Unsolved
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
Node* sort(Node* head){
    if(head->next==NULL ){
        return head;
    }
    if (head->data > head->next->data)
    {
        swap(&head->data, &head->next->data);
    }
    sort(head->next);
    return head;
}
Node *LLSort(Node *head)
{
    // if(head->next==NULL ){
    //     return head;
    // }
    // if (head->data > head->next->data)
    // {
    //     swap(&head->data, &head->next->data);
    // }

    head=LLSort(head);

    return head;
}

void printList(Node *head)
{
    printf("The Linked List is: \n");
    while (head != NULL)
    {
        printf("%d->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int main()
{
    Node *head = (Node *)malloc(sizeof(Node) * 1);
    head->data = 7;
    Node *two = (Node *)malloc(sizeof(Node) * 1);
    two->data = 6;
    Node *three = (Node *)malloc(sizeof(Node) * 1);
    three->data = 5;
    Node *four = (Node *)malloc(sizeof(Node) * 1);
    four->data = 4;
    Node *five = (Node *)malloc(sizeof(Node) * 1);
    five->data = 3;
    Node *six = (Node *)malloc(sizeof(Node) * 1);
    six->data = 2;
    Node *seven = (Node *)malloc(sizeof(Node) * 1);
    seven->data = 1;

    head->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    six->next = seven;
    seven->next = NULL;

    printList(head);
    head = LLSort(head);
    printList(head);
    return 0;
}