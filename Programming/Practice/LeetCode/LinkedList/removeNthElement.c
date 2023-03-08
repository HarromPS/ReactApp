#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void removeNthNode(Node **head, int position, int i)
{
    // May not be used
    if (position == -1)
    {
        *head = (*head)->next;
        return;
    }
    while (i != position && *head != NULL)
    {
        *head = (*head)->next;
        i++;
    }
   (*head)->next = (*head)->next->next;
}
Node *findNthNode(Node *head, int index)
{
    int length = 0;
    Node *current = head;
    while (current != NULL)
    {
        current = current->next;
        length++;
    }
    current = head;
    removeNthNode(current, length - index - 1, 0);
    if (length - index - 1 == -1)
    {
        return head->next;
    }

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
    head->data = 1;
    Node *two = (Node *)malloc(sizeof(Node) * 1);
    two->data = 2;
    Node *three = (Node *)malloc(sizeof(Node) * 1);
    three->data = 3;
    Node *four = (Node *)malloc(sizeof(Node) * 1);
    four->data = 4;
    Node *five = (Node *)malloc(sizeof(Node) * 1);
    five->data = 5;
    Node *six = (Node *)malloc(sizeof(Node) * 1);
    six->data = 6;
    Node *seven = (Node *)malloc(sizeof(Node) * 1);
    seven->data = 7;

    head->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    six->next = seven;
    seven->next = NULL;

    printList(head);
    head = findNthNode(head, 4);
    printList(head);
    return 0;
}