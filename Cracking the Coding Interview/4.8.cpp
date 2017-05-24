#include"bst.h"

bool match(node *r1, node *r2)
{
    if(!r1 && !r2)
        return true;
    if(!r1 || !r2)
        return false;
    if(r1->data!= r2->data)
        return false;
    return (match(r1->left,r2->left) && match(r1->right,r2->right));
}

bool subtree(node *r1, node *r2)
{
    if(r2==NULL)
        return true;
    if(r1==NULL)
        return false;
    if(r1->data == r2->data)
    {
        if(match(r1, r2))
            return true;
    }
    return (subtree(r1->left,r2) || subtree(r1->right, r2));
}

int main()
{
    node* root = NULL, *root1 = NULL;
    root = insrt(root,4);
    root = insrt(root,12);
    root = insrt(root,3);
    root = insrt(root,67);
    root = insrt(root,9);
    root = insrt(root,2);
    root = insrt(root,10);
    root = insrt(root,15);

    root1 = insrt(root1,12);
    root1 = insrt(root1,67);
    root1 = insrt(root1,9);
    root1 = insrt(root1,10);
    root1 = insrt(root1,15);
    if(subtree(root, root1))
        cout<<"Yes.";
    else
        cout<<"No.";
    return 0;
}

