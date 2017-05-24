#include<stdio.h>
#include<stdlib.h>
struct Linkedlist
{
    int data;
    struct Linkedlist *next;
};
void display(struct Linkedlist **head)
{
    if(*head==NULL)
        printf("List is empty.");
    while(*head!=NULL)
    {
        printf("Element: %d\n",(*head)->data);
        *head=(*head)->next;
    }
}
void insertion(struct Linkedlist **head,int data)
{
    struct Linkedlist *current=*head;
    if(*head)
    while(current->next!=NULL)
        current=current->next;
    struct Linkedlist *newnode;
    newnode=(struct Linkedlist*)(malloc(sizeof(struct Linkedlist)));
    newnode->next=NULL;
    newnode->data=data;
    if(*head)
    current->next=newnode;
    if(!*head)
    *head=newnode;
}
int main()
{
    struct Linkedlist *head=NULL;
    insertion(&head,1);
    insertion(&head,2);
    insertion(&head,3);
    printf("%p\n%p\n",head,&head);
    display(&head);
    return 0;
}
