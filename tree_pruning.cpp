#include<iostream>
#include<stdlib.h>

using namespace std;

typedef struct Node
{
    int data;
    struct Node *left, *right;
}node;

// A utility function to create a new Binary Tree node with given data
struct Node* newNode(int data)
{
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

// print the tree in LVR (Inorder traversal) way.
void print(struct Node *root)
{
    if (root != NULL)
    {
        print(root->left);
        printf("%d ",root->data);
        print(root->right);
    }
}

int prune(node **root,int k, int sum)
{
    if(!(*root) && sum>=k)
        return 1;

    if(!(*root))
        return 0;
    int l,r;
    sum+=(*root)->data;
    l = prune(&(*root)->left,k,sum);
    r = prune(&(*root)->right,k,sum);

    if(!l && !r)
    {
        free(*root);
        *root = NULL;
    }
    return (l||r);
}

int main()
{
    int k = 45;
    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->left->left->left = newNode(8);
    root->left->left->right = newNode(9);
    root->left->right->left = newNode(12);
    root->right->right->left = newNode(10);
    root->right->right->left->right = newNode(11);
    root->left->left->right->left = newNode(13);
    root->left->left->right->right = newNode(14);
    root->left->left->right->right->left = newNode(15);

    printf("Tree before truncation\n");
    print(root);

    prune(&root, k,0); // k is 45

    printf("\n\nTree after truncation\n");
    print(root);

    return 0;
}
