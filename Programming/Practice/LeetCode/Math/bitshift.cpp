#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // n = 101, num = 0,
    int x = 1, val, number = 0;
    int i = 0;
    while (i != 7)
    {
        cout << "Val: ";
        cin >> val;
        if (val * x == 0)
        {
            number = (number >> x) + number;
        }
        else
        {
            number = number + (x * val);
        }
        cout << number << endl;
        x = x * 10;
        i++;
    }
    cout << number << endl;
    return 0;
}
/*
bool helper(struct ListNode** front, struct ListNode* back);

bool isPalindrome(struct ListNode* head){
    struct ListNode* front = head;
    return helper(&front, head);

}

bool helper(struct ListNode** front, struct ListNode* back){
    if(back == null) return true;

    //let back pointer travel to the back of the list through recursion
    bool equal_so_far = helper(front, back.next);

    //check if front and back have the same value
    bool value_equal = ((*front).val == back.val);

    //when the function return, back is gradually moved toward head of the list
    //move front accordingly to compare their value
    *front = (*front).next;
    return equal_so_far && value_equal;
}
*/
