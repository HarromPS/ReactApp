#include <iostream>
#include <cstdio>
using namespace std;

// Binary tree in order transversal
typedef struct TreeNode
{
    struct TreeNode *left;
    int data;
    struct TreeNode *right;
} Tree;

// void create(Tree *vertex, int d)
// {
//     int choice;
//     printf("Enter\n1 for left node\n2 for right node\n==>");
//     scanf("%d", &choice);
//     if (vertex == NULL)
//     {
//         Tree *newNode = (Tree *)malloc(sizeof(Tree));
//         newNode->data = d;
//         newNode->left = NULL;
//         newNode->right = NULL;
//         vertex = newNode;
//         printf("Node Created!\n");
//     }
//     else
//     {
//         if (choice == 1)
//         {
//             int D;
//             printf("Enter the data to be filled in that node=>");
//             scanf("%d", &D);
//             Create(vertex->left, D);
//         }
//         if (choice == 2)
//         {
//             int D;
//             printf("Enter the data to be filled in that node=>");
//             scanf("%d", &D);
//             Create(vertex->right, D);
//         }
//         else
//         {
//             printf("Tree Created\n");
//         }
//     }
// }
void Create(Tree **vertex)
{
    int ch;
    if (*vertex != NULL)
    {
        printf("\nEnter 1 to create a left branch node\n");
        printf("Enter 2 to create a right branch node\n");
        printf("Enter 3 to exit\n==>");
        scanf("%d", &ch);
    }
    if (*vertex == NULL)
    {
        Tree *newNode = (Tree *)malloc(sizeof(Tree));
        printf("Enter the data for vertex node: ");
        int data;
        scanf("%d", &newNode->data);
        newNode->left = NULL;
        newNode->right = NULL;
        (*vertex) = newNode;
        Create(vertex);
    }
    else if (ch == 1)
    {
        Tree *newNode = (Tree *)malloc(sizeof(Tree));
        printf("Enter the data for the left node created: ");
        int data;
        scanf("%d", &newNode->data);
        newNode->left = NULL;
        newNode->right = NULL;
        (*vertex)->left = newNode;
        Create(&(*vertex)->left);
    }
    else if (ch == 2)
    {
        Tree *newNode = (Tree *)malloc(sizeof(Tree));
        printf("Enter the data for the right node created: ");
        int data;
        scanf("%d", &newNode->data);
        newNode->left = NULL;
        newNode->right = NULL;
        (*vertex)->right = newNode;
        Create(&(*vertex)->right);
    }
    else
    {
        return;
    }
}
int *Transversal(Tree *vertex, int *arr, int i)
{
    if (vertex == NULL)
    {
        return 0;
    }
    else
    {
        Transversal(vertex->left, arr, i);
        if (vertex != NULL)
        {
            arr[i] = vertex->data;
            i++;
        }
        Transversal(vertex->right, arr, i);
    }
    return arr;
}
int main()
{
    Tree *head = (Tree *)malloc(sizeof(Tree));
    // head = NULL;
    // head->data = 1;
    // head->left = NULL;
    // head->right = NULL;
    printf("Enter values for left node\n");
    Create(&head);
    printf("Enter values for right node\n");
    // Create(head, 1);

    return 0;
}