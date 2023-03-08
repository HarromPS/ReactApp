#include <iostream>
#include <cstdio>
using namespace std;

// Prime factors:
int main()
{
    int n, i = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int arr[] = {2, 3, 5, 7, 11, 13, 17, 23, 29, 31, 37, 41};
    while (n != 0)
    {
        if ((n % arr[i]) == 0)
        {
            n = n / arr[i];
            printf("%d ", arr[i]);
        }
        else
        {
            i++;
        }
    }

    return 0;
}
/*
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Special case...
        if(head == NULL || head->next == NULL)  return head;
        // Initialize prev pointer as the head...
        ListNode* prev = head;
        // Initialize curr pointer as the next pointer of prev...
        ListNode* curr = prev->next;
        // Initialize next of head pointer as NULL...
        head->next = NULL;
        // Run a loop till curr and prev points to NULL...
        while(prev != NULL && curr != NULL){
            // Initialize next pointer as the next pointer of curr...
            ListNode* next = curr->next;
            // Now assign the prev pointer to curr’s next pointer.
            curr->next = prev;
            // Assign curr to prev, next to curr...
            prev = curr;
            curr = next;
        }
        return prev;    // Return the prev pointer to get the reverse linked list...
    }*/