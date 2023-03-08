#include<iostream>
#include<cstdio>
using namespace std;

typedef class TreeNode
{
    public:
    int data;
    TreeNode* right;
    TreeNode* left;
}TreeNode;

class Solution
{
    public :
    void copy(TreeNode* cloned,TreeNode* target,TreeNode** x){
        if(cloned!=NULL){
            if((cloned)->data == target->data){
                *x=cloned;
            }
            copy(cloned->left,target,x);
            copy(cloned->right,target,x);
        }
    }
    TreeNode* targetCopy(TreeNode* original,TreeNode* cloned,TreeNode* target){
        TreeNode* x;
        copy(cloned,target,&x);
        return x;
    }
};
int main(){
    TreeNode* root=(TreeNode*)malloc(sizeof(TreeNode)*1);
    root->data=7;
    TreeNode* left=(TreeNode*)malloc(sizeof(TreeNode)*1);
    left->data=12;
    TreeNode* right=(TreeNode*)malloc(sizeof(TreeNode)*1);
    right->data=14;

    root->left=left;
    root->right=right;

    right->left=NULL;
    right->right=NULL;

    left->left=NULL;
    left->right=NULL;

    Solution s;
    TreeNode *a=s.targetCopy(root,root,left);
    cout<<a->data<<endl;
    return 0;
}