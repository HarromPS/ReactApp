#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 1) Counting of the even position in linked list using recursion
// 3) WAP using LL to print the marksheet of student with different number of subjects .
// Try the above program using dynamic memory allocation.
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
struct Node *tail = NULL;
// 1) function to count even position in linked list
int Count(struct Node *s, int *count, int i)
{
    if (s == NULL)
    {
        return *count;
    }
    if (i % 2 == 0)
    {
        i += 1;
        *count += 1;
        s = s->next;
        return Count(s, count, i);
    }
    else
    {
        i += 1;
        s = s->next;
        return Count(s, count, i);
    }
    return 0;
}
struct Node *Create(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL)
    {
        tail = newNode;
        head = tail;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
        tail->next = NULL;
    }
    return head;
}
// Transverse using recursion
void transversal(struct Node *current)
{
    if (current==NULL)
    {
        return;
    }
    else
    {
        printf("(%d)->", current->data);
        transversal(current->next);
    }

}
int main()
{
    // 1) Counting of the even position in linked list recursively

    int count = 0, i = 1;
    Create(10);
    Create(20);
    Create(30);
    Create(40);
    Create(220);

    struct Node *current = head;
    transversal(current);
    printf("NULL\n");
    int r = Count(current, &count, i);
    printf("There are %d nodes at even position\n", r);
    return 0;
}