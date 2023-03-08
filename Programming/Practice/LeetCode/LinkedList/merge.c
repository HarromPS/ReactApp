// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     struct ListNode *next;
//  * };
//  */

// O(m+n)=>time complexity

// struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
//     struct ListNode* temp=(struct ListNode*)malloc(sizeof(struct ListNode)*1);
//     struct ListNode* head=NULL;
//     if(list1==NULL && list2==NULL)
//     {
//         return head;
//     }
//     if(list1==NULL && list2!=NULL)
//     {
//         temp->val=list2->val;
//         temp->next=NULL;
//     }
//     else if(list1!=NULL && list2==NULL)
//     {
//         temp->val=list1->val;
//         temp->next=NULL;
//     }
//     head=temp;
//     struct ListNode* i=list1,*j=list2;
//     while(i!=NULL && j!=NULL)
//     {
//         if(i->val < j->val)
//         {
//             struct ListNode* node=(struct ListNode*)malloc(sizeof(struct ListNode));
//             node->val=i->val;
//             node->next=NULL;
//             temp->next=node;
//             temp=node;
//             i=i->next;
//         }
//         else 
//         {
//             struct ListNode* node=(struct ListNode*)malloc(sizeof(struct ListNode));
//             node->val=j->val;
//             node->next=NULL;
//             temp->next=node;
//             temp=node;
//             j=j->next;
//         }
//     }
//     while(i!=NULL)
//     {
//         struct ListNode* node=(struct ListNode*)malloc(sizeof(struct ListNode));
//             node->val=i->val;
//             node->next=NULL;
//             temp->next=node;
//             temp=node;
//             i=i->next;        
//     }
//     while(j!=NULL)
//     {
//         struct ListNode* node=(struct ListNode*)malloc(sizeof(struct ListNode));
//             node->val=j->val;
//             node->next=NULL;
//             temp->next=node;
//             temp=node;
//             j=j->next;        
//     }
//     return head->next;
// }