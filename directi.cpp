#include<iostream>
#include<stdlib.h>

using namespace std;
int cnt=0;
typedef struct node{
    char data;
    node *left, *right;
}node;


void inorder(node *root)
{
    if(!root)
        return;
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

node* posttree(char post[], int *i)
{
    if(!sizeof(post) || *i<0)
        return NULL;
    node *nw = new node;
    nw->data = post[*i];
    nw->left = nw->right = NULL;
    if((int)(post[*i])>96 && (int)(post[*i])<=122)
        return nw;
    *i = *i-1;
    nw->right = posttree(post,i);
    *i = *i-1;
    nw->left = posttree(post,i);
    return nw;
}

void path_leaf(node *root, char path[], int i, char sub[])
{
    if(!root)
        return;
    path[i] = root->data;
    path[i+1] = '\0';
    i++;
    if(root->left==NULL && root->right==NULL)
    {
        int j,k;
        for(j=0,k=0;j<i;j++)
        {
            if(path[j] == sub[k])
                k++;
        }
        if(sub[k]=='\0')
            cnt++;
        cout<<path<<endl;
    }
    else
    {
        path_leaf(root->left,path,i,sub);
        path_leaf(root->right,path,i,sub);
    }
}

int main()
{
    node* root;
    char path[1024];
   // char post[] = "mTnRmmSQ";
    char post[] = "mTnRQ";
    int i = sizeof(post)/sizeof(post[0])-2;
    root = posttree(post,&i);
    inorder(root);
    cout<<endl;
    char sub[] = "Qm";
    path_leaf(root,path,0,sub);
    cout<<cnt;
    return 0;
}
