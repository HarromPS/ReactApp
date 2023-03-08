#include <iostream>
#include <cstdio>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        int x = 1;
        long long int num = 0;
        struct ListNode *current = head;
        while (current != NULL)
        {
            num = num + (x * current->val);
            x = x * 10;
            current = current->next;
        }
        long long int temp = num, rem, sum = 0;
        while (num > 0)
        {
            rem = num % 10;
            sum = (sum * 10) + rem;
            num = num / 10;
        }
        if (temp == sum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void print(ListNode *head)
    {
        while (head != NULL)
        {
            cout << head->val << "->";
            head = head->next;
        }
    }
};
int main()
{
    Solution s;
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode *) * 1);
    head->val = 1;
    struct ListNode *sec = (struct ListNode *)malloc(sizeof(struct ListNode *) * 1);
    sec->val = 2;
    struct ListNode *third = (struct ListNode *)malloc(sizeof(struct ListNode *) * 1);
    third->val = 2;
    struct ListNode *four = (struct ListNode *)malloc(sizeof(struct ListNode *) * 1);
    four->val = 1;

    head->next = sec;
    sec->next = third;
    third->next = four;
    four->next = NULL;

    // s.print(head);
    bool b = s.isPalindrome(head);
    if (b)
    {
        cout << "Is a palindrome" << endl;
    }
    else
    {
        cout << "Is a palindrome" << endl;
    }
    return 0;
}