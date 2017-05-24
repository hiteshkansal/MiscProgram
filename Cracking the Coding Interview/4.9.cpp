//#include"bst.h"
#include"fullBTree.h"
int height(node *root)
{
    if(!root)
        return -1;
    return max(height(root->left), height(root->right))+1;
}
void print(int path[], int i, int j)
{
    for(int k=i;k<=j;k++)
        cout<<path[k]<<" ";
    cout<<endl;
}
void find_path_sum(node *root, int path[], int sum, int index)
{
    if(!root)
        return;
    path[index] = root->data;
    int x=0;
    for(int i=index;i>=0;i--)
    {
        x+=path[i];
        if(x==sum)
            print(path,i,index);
    }
    find_path_sum(root->left,path,sum,index+1);
    find_path_sum(root->right,path,sum,index+1);
}

int main()
{
    node* root = NULL;
/*    root = insrt(root,4);
    root = insrt(root,12);
    root = insrt(root,3);
    root = insrt(root,67);
    root = insrt(root,9);
    root = insrt(root,2);
    root = insrt(root,10);
    root = insrt(root,15);
    */
    root = tree(root,3);
    int n = height(root);
    int path[n+1];
    int sum = 5;
    find_path_sum(root,path,sum, 0);
    return 0;
}
