// #include <iostream>
// #include <cstdio>
// using namespace std;

// typedef class ListNode
// {
// public:
//     int val;
//     ListNode *next;
//     ListNode* N;

//     ListNode* create(){
//         ListNode* newNode=(ListNode*)malloc(sizeof(ListNode)*1);
//         newNode->val=0;
//         newNode->next=NULL;
//         return newNode;
//     }
//     ListNode *mergeNodes(ListNode *head)
//     {
//         N=(ListNode*)malloc(sizeof(ListNode)*1);
//         if(head!=NULL)
//         {
//             if(head->val!=0)
//             {
//                 N->val+=head->val;
//             }
//             else{
//                 N->next=mergeNodes(head->next);

//             }
//         }
        
//         return head;
//     }
//     void print(ListNode* head)
//     {
//         while(head!=NULL){
//             cout<<head->val<<"->";
//             head=head->next;
//         }
//     }
// } ListNode;
// int main()
// {
//     ListNode* head=(ListNode*)malloc(sizeof(ListNode));
//     head->val=0;
//     ListNode* s=(ListNode*)malloc(sizeof(ListNode));
//     s->val=3;
//     ListNode* th=(ListNode*)malloc(sizeof(ListNode));
//     th->val=1;
//     ListNode* fo=(ListNode*)malloc(sizeof(ListNode));
//     fo->val=0;
//     ListNode* fif=(ListNode*)malloc(sizeof(ListNode));
//     fif->val=4;
//     ListNode* six=(ListNode*)malloc(sizeof(ListNode));
//     six->val=5;
//     ListNode* sev=(ListNode*)malloc(sizeof(ListNode));
//     sev->val=2;
//     ListNode* ei=(ListNode*)malloc(sizeof(ListNode));

//     head->next=s;
//     s->next=th;
//     th->next=fo;
//     fo->next=fif;
//     fif->next=six;
//     six->next=sev;
//     sev->next=NULL;
//     head->print(head);
//     // head=head->mergeNodes(head);
//     cout<<endl;
//     head->print(head);



//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s=0;
	    cin>>n;
	    int a[n];
	    for(int i=1;i<=n;i++)
	    {
	        cin>>a[i];
	    }
	    s=0;
	    for(int i=1;i<n;i++)
	    {
	        if(a[i]<a[i+1])
	        {
	            s+=0;
	        }
	        else if(a[i]>a[i+1]){
	            s+=1;
	        }
	    }
	    cout<<s<<endl;
	}
	return 0;
}
