#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *Left;
    struct node *Right;
};
void insert(struct node **root,int x)
{
    struct node *temp;
    if(*root==NULL)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=x;
        temp->Left=NULL;
        temp->Right=NULL;
        *root=temp;
    }
    else
    {
        if(x<(*root)->data)
            insert(&((*root)->Left),x);
        else
            insert(&((*root)->Right),x);
    }
}
void inorder(struct node *node)
{
    if(node!=NULL)
    {
        inorder(node->Left);
        printf("%d->",node->data);
        inorder(node->Right);
    }
}
void preorder(struct node *node)
{
    if(node!=NULL)
    {
        printf("%d->",node->data);
        preorder(node->Left);
        preorder(node->Right);
    }
}
void postorder(struct node *node)
{
    if(node!=NULL)
    {
        postorder(node->Left);
        postorder(node->Right);
        printf("%d->",node->data);
    }
}
void main()
{
    struct node *root=NULL;
    insert(&root,50);
    insert(&root,30);
    insert(&root,10);
    insert(&root,60);
    insert(&root,40);
    insert(&root,45);
    insert(&root,55);
    insert(&root,89);
    insert(&root,75);
    insert(&root,15);
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
}