#include<iostream>
#include<stdlib.h>

using namespace std;

typedef struct node
{
    struct node *left;
    int data;
    struct node *right;
    struct node *parent;
}node;

node* insrt(node *root, int n, node *prnt)
{
    if(n==0)
        return root;
    if(!root)
    {
        int v;
        cin>>v;
        root = new node;
        root->left = root->right = NULL;
        root->data = v;
        root->parent = prnt;
    }
    prnt = root;
    root->left = insrt(root->left, n-1, prnt);
    root->right = insrt(root->right, n-1,prnt);
    return root;
}
void inorder(node *root)
{
    if(root)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int leftmost(node *root)
{
    if(!root)
        return 0;
    while(root->left)
        root = root->left;
    return root->data;
}
int in_succ(node *root)
{
    if(!root)
        return 0;
    if(root->right!=NULL)
        return leftmost(root->right);
    node  *q, *p;
    q  = root;
    p = q->parent;
    while(p!=NULL && p->left!=q)
    {
        q = p;
        p = p->parent;
    }
    if(!p)
        return -1;
    else
        return p->data;
}
int main()
{
    node *root = NULL, *temp;
    root = insrt(root,3,NULL);
    //inorder(root);
    temp = root->right;
    int k = in_succ(temp);
    if(k<0)
        cout<<"No Successor.";
    else
        cout<<k;
    return 0;
}
