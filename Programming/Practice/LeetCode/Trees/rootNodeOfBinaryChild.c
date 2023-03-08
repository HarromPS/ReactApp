#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Root node of binary tree child
// i.e if sum of the root child = root
typedef struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
    // struct TreeNode() : val(0), left(nullptr), right(nullptr) {}
    // struct TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    // struct TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
} Node;
bool transversal(Node*,int*);
bool transversal(Node *vertex, int *sum)
{
    if (vertex == NULL)
    {
        // return ;
    }
    else
    {
        transversal(vertex->left,sum);
        transversal(vertex->right,sum);
        *sum += vertex->data;
    }
}
int main()
{
    Node *vertex = (Node *)malloc(sizeof(Node));
    Node *left = (Node *)malloc(sizeof(Node));
    Node *right = (Node *)malloc(sizeof(Node));
    vertex->data = 10;
    vertex->left=left;
    vertex->left->data=4;
    vertex->right=right;
    vertex->right->data=6;
    int sum = 0;
    bool x = transversal(vertex, &sum);
    printf("%d\n",sum);
    if (sum - vertex->data == vertex->data)
    {
        printf("YES\n");
    }
    return 0;
}