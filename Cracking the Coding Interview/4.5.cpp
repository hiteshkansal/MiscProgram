//#include"bst.h"
#include"fullBTree.h"
#include <limits.h>
bool checkbst(node *root, int *m)
{
    if(!root)
        return true;
    if(!checkbst(root->left,m))
        return false;
    if(root->data < *m)
        return false;
    *m = root->data;
    if(!checkbst(root->right,m))
        return false;
    return true;
}

int main()
{
    int min_m = INT_MIN;
    node *root = NULL;
  /*  root = insrt(root,4);
    root = insrt(root,12);
    root = insrt(root,13);
    root = insrt(root,67);
    root = insrt(root,19);
    root = insrt(root,44);
*/
    root = tree(root, 3);

    inorder(root);
    if(checkbst(root, &min_m))
        cout<<"Yes.";
    else
        cout<<"No.";
    return 0;
}
