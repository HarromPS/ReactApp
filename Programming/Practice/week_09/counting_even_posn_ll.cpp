#include <iostream>
#include <cstdio>
using namespace std;

// 1) Counting of the even position in linked list using recursion
// 2) WAP using array to print the marksheet of student using structure
// 3) WAP using LL to print the marksheet of student with different number of subjects .
// 4) Try the above program using dynamic memory allocation.
struct Node
{
    int data;
    struct Node *next;
};
// 1) function to count even position in linked list
int Count(struct Node *s, int *count,int i)
{
    if (s == NULL)
    {
        return *count;
    }
    if (i%2==0)
    {
        i+=1;
        *count+=1;
        s = s->next;
        return Count(s,count,i);

    }
    else{
        i+=1;
        s=s->next;
        return Count(s,count,i);
    }
    return 0;
}


int main()
{
    // 1) Counting of the even position in linked list

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth4 = (struct Node *)malloc(sizeof(struct Node));

    int count = 0,i=1;

    // Linking nodes
    head->data = 7;
    head->next = second;

    // Linking nodes
    second->data = 8;
    second->next = third;

    // Linking nodes
    third->data = 9;
    third->next = fourth;

    // Linking nodes
    fourth->data = 10;
    fourth->next = fourth1;

    fourth1->data = 11;
    fourth1->next = fourth2;

    fourth2->data = 12;
    fourth2->next = fourth3;

    fourth3->data = 13;
    fourth3->next = fourth4;
    fourth4->data = 14;
    fourth4->next = NULL;
    struct Node *current = head;
    int r=Count(current, &count,i);
    printf("There are %d nodes at even position\n",r);
    return 0;
}