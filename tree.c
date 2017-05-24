#include<stdio.h>
#include<stdlib.h>

typedef struct tree
{
    struct tree *left;
    int data;
    struct tree *right;
}tree;

void insert1(tree **rt, int num)
{
    if(*rt==NULL)
    {
        *rt= malloc(sizeof(tree));
        (*rt)->left=NULL;
        (*rt)->data=num;
        (*rt)->right=NULL;
    }
    else
    {
        if(num<(*rt)->data)
            insert1(&((*rt)->left),num);
        else
            insert1(&((*rt)->right),num);
    }
}
void inorder(tree *bt)
{
    if(bt!=NULL)
    {
        inorder(bt->left);
        printf("%d ",bt->data);
        inorder(bt->right);
    }
    else
        return;
}
void preorder(tree *bt)
{
    if(bt!=NULL)
    {
        printf("%d ",bt->data);
        preorder(bt->left);
        preorder(bt->right);
    }
    else
        return;
}
void postorder(tree *bt)
{
    if(bt!=NULL)
    {
        postorder(bt->left);
        postorder(bt->right);
        printf("%d ",bt->data);
    }
    else
        return;
}
int main()
{
    int i,a;
    tree *bt;
    bt=NULL;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a);
        insert1(&bt,a);
    }
    printf("Inorder is: ");
    inorder(bt);
    printf("\n");

    printf("Preorder is: ");
    preorder(bt);
    printf("\n");

    printf("Postorder is: ");
    postorder(bt);
    printf("\n");
    return 0;
}
