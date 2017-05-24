#include<iostream>
#include <stdlib.h>
using namespace std;

struct treeNode
{
    char data;
    struct treeNode *left, *right;
};

struct treeNode * GenerateTree(char *str,int *ptr)
{
    if(str[*ptr]=='\0')
    {
        return NULL;
    }
    if(str[*ptr]=='.')
    {
        *ptr=*ptr+1;
        return NULL;
    }
    struct treeNode *temp=(struct treeNode *)malloc(sizeof(struct treeNode));
    temp->data=str[*ptr];
    temp->left=NULL;
    temp->right=NULL;
    *ptr = *ptr +1;
    if(str[*ptr]=='(')
    {
        *ptr=*ptr+1;
        temp->left=GenerateTree(str,ptr);
        if(str[*ptr]==')')
        {
                *ptr=*ptr+1;
                return temp;
        }
        temp->right=GenerateTree(str,ptr);
    }
    *ptr=*ptr+1;
    return temp;
}

void printPreorder(struct treeNode *head)
{
    if(head==NULL)
        return;
    printPreorder(head->left);
    cout<<head->data<<" ";
    printPreorder(head->right);
}

void printColumn(struct treeNode *head,int columnCounter,int column)
{
    if(head==NULL)
    {
        return;
    }
    if(columnCounter==column)
    {
        cout<<head->data<<" ";
    }
    printColumn(head->left,columnCounter-1,column);
    printColumn(head->right,columnCounter+1,column);
}

int main()
{
    int ptr=0;
    char str[]="a(b(d(..)f(..))c(e(..)))";
    struct treeNode *head=GenerateTree(str,&ptr);

    printPreorder(head);
    cout<<endl;
    printColumn(head,1,1);
    cout<<endl;
    system("PAUSE");
    return 0;
}
