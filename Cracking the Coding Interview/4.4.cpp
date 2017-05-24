//#include"fullBTree.h"
#include"bst.h"
#include<queue>
//1 2 3 4 5 6 7

int height(node* root)
{
    if(!root)
        return -1;
    return max(height(root->left),height(root->right))+1;
}
void tree_list(node *root)
{
    node *temp;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int n = height(root);
    node* ar[n];
    ar[0] = root;
    int i=1;
    while(!q.empty())
    {
        temp = q.front();
        q.pop();
        if(temp==NULL)
        {
            if(!q.empty())
            {
                q.push(NULL);
                ar[i++] = q.front();
                continue;
            }
            else
                break;
        }
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
        if(!q.empty())
        {
            temp->left = NULL;
            temp->right = q.front();
        }
    }

    for(int i=0;i<=n;i++)
    {
        node *pr = ar[i];
        while(pr!=NULL)
        {
            cout<<pr->data<<" ";
            pr = pr->right;
        }
        cout<<endl;
    }
}

int main()
{
    node* root = NULL;
//    root = tree(root,3);
    root = insrt(root,4);
    root = insrt(root,12);
    root = insrt(root,3);
    root = insrt(root,67);
    root = insrt(root,9);
    root = insrt(root,2);
    tree_list(root);
    return 0;
}
