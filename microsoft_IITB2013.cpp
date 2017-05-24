// Swap 2 elements of linked list.


#include<iostream>

using namespace std;

typedef struct llist
{
    int data;
    struct llist *next;
}llist;

llist* node(int v)
{
    llist *nw = new llist;
    nw->data = v;
    nw->next = NULL;
    return nw;
}

llist* create()
{
    int n;
    cout<<"How many node: ";
    cin>>n;
    llist *head;
    llist *nw = (llist*)malloc(sizeof(llist));
    nw = node(1);
    head = nw;
    for(int i=1;i<n;i++)
    {
        nw->next = node(i+1);
        nw = nw->next;
    }
    return head;
}

llist* delte(llist *head, int n)
{
    llist *p = head, *temp;
    if(n==1)
    {
        while(p)
        {
        temp = p->next;
        free(p);
        p=temp;
        }
        return NULL;
    }
    int i=1;
    while(p->next!=NULL)
    {
        while(i++<n-1)
        {
            if(p->next)
                p = p->next;
            else
                return head;
        }
        temp = p->next;
        p->next = temp->next;
        free(temp);
        temp=NULL;
        i=0;
    }
    return head;
}

llist* swap_node(llist *head)
{
    llist *p = head, *q,*temp;
    head = head->next;
    while(p->next)
    {
        q = p->next;
        p->next = q->next;
        if(!(q->next))
        {
            q->next = p;
            break;
        }
        else if(q->next->next)
            p->next = q->next->next;
        temp = q->next;
        q->next = p;
        p = temp;
    }
    return head;
}
int main()
{
    llist *head,*res;
    head = create();
   // res = swap_node(head);
    res = delte(head,1);
    if(!res)
    {
        cout<<"All list deleted.";
        return 0;
    }
    while(res->next)
    {
        cout<<res->data<<"-->";
        res = res->next;
    }
    cout<<res->data<<endl;

    return 0;
}
