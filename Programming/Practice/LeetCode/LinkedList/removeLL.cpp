#include <iostream>
#include <cstdio>
using namespace std;

typedef class Node
{
public:
    int val;
    class Node *next;
    class Node *remove(Node *head, int val);
} Node;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

Node *remove(Node *head, int val)
{
    if (head == NULL)
    {
        return head;
    }
    Node *p = head;
    Node *q = head;
    Node *temp = head;
    while (q->next != NULL)
    {
        if (q->val == val)
        {
            p->next = q->next;
            q = q->next;
        }
        else
        {
            p = q;
            q = q->next;
        }
    }
    if ((q == NULL || q->next == NULL) && q->val == val)
    {
        p->next = q->next;
    }
    if (temp->val == val)
    {
        head = head->next;
        temp->next = NULL;
    }
    return head;
}

void Display(Node *head)
{
    if (head == NULL)
    {
        cout<<"NULL";
        return;
    }
    Node *current = head;
    while (current != NULL)
    {
        cout << current->val << "->";
        current = current->next;
    }
}
int main()
{
    Node *head = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *third = (Node *)malloc(sizeof(Node));
    Node *fourth = (Node *)malloc(sizeof(Node));
    Node *fifth = (Node *)malloc(sizeof(Node));
    Node *sixth = (Node *)malloc(sizeof(Node));
    Node *seventh = (Node *)malloc(sizeof(Node));

    head->val = 1;
    head->next = second;
    second->val = 2;
    second->next = third;
    third->val = 6;
    third->next = fourth;
    fourth->val = 3;
    fourth->next = fifth;
    fifth->val = 4;
    fifth->next = sixth;
    sixth->val = 5;
    sixth->next = seventh;
    seventh->val = 6;
    seventh->next = NULL;
    Display(head);
    cout << "NULL" << endl;
    head=remove(head, 6);
    Display(head);
    cout << "NULL" << endl;
    return 0;
}