#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node*head=NULL;
void addatbeg(int x)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=head;
    head=temp;

}
void traverse()
{
    struct node *t;
    while(t!=NULL)
    {
        printf("%d->",t->data);
        t=t->next;
    }
}
void main()
{
    addatbeg(18);
    addatbeg(60);
    traverse();
}