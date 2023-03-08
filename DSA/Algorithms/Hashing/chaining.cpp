#include <iostream>
#include <cstdio>
using namespace std;

// Chaining(Open Hashing) Algorithm
// Creating a linked list

typedef struct helper
{
    int data;
    struct helper *next;
} helper;

typedef struct Node
{
    // array of pointers
    helper **arr;
    int data;

    int size;

} Node;

Node *createNode(int size)
{
    Node *n = (Node *)malloc(sizeof(Node) * 1);
    helper *hp = (helper *)malloc(sizeof(helper) * 1);
    n->arr = (helper **)malloc(sizeof(helper *) * size);
    return n;
}
void insert(Node *node, int key)
{
    int index = key % node->size;
    while (node->arr[index] != NULL)
    {
        node->arr;
    }
}
void print()
{
}
void search()
{
}
int main()
{
    // pointer of pointers
    int *(*arr);
    int array[2] = {1, 2};
    (*arr) = &array[1];
    printf("%d", arr);
    printf("%d", *arr[0]);

    return 0;
}


// struct node
// {
//     int key;
//     int age;
//     char name[100];
//     struct node *next;
// };

// struct hash
// {
//     struct node *head;
//     int count;
// };

// struct hash *hashTable = NULL;
// int eleCount = 0;

// struct node *createNode(int key, char *name, int age)
// {
//     struct node *newnode;

//     newnode = (struct node *)malloc(sizeof(struct node));

//     newnode->key = key;
//     newnode->age = age;
//     strcpy(newnode->name, name);
//     newnode->next = NULL;

//     return newnode;
// }

// void insertToHash(int key, char *name, int age)
// {
//     int hashIndex = key % eleCount;
//     struct node *newnode = createNode(key, name, age);

//     if (!hashTable[hashIndex].head)
//     {
//         hashTable[hashIndex].head = newnode;
//         hashTable[hashIndex].count = 1;

//         return;
//     }

//     // adding new node to the list
//     newnode->next = (hashTable[hashIndex].head);

//     // update the head of the list and no of
//     //  nodes in the current bucket

//     hashTable[hashIndex].head = newnode;
//     hashTable[hashIndex].count++;
//     return;
// }
