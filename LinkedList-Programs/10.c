//delete a node in linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *first=NULL;

struct node *create(struct node *first)
{
    int elem,choice;
    struct node *p;
    do
    {
        p=malloc(sizeof(struct node));
        printf("enter the element");
        scanf("%d",&elem);
        p->data=elem;
        p->link=NULL;
        if(first == NULL)
        {
            first=p;
        }
        else
        {
            p->link=first;
            first=p;
        }
        printf("Do you wanna continue..?(1)");
        scanf("%d",&choice);
    }while(choice == 1);
    return first;
}

void display(struct node *first)
{
    struct node *temp;
    if(first == NULL)
    {
        printf("Display not possible..");

    }
    else if(first->link == NULL)
    {
        printf("%d\t",first->data);
    }
    else
    {
        temp=first;
        while(temp != NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->link;
        }
    }
}

struct node *delete(struct node *first,int key)
{
    struct node *prev,*temp;
    if(first == NULL)
    {
        printf("delete not possible\n");
    }
    else if(first->data == key)
    {
        temp=first;
        first=first->link;
        free(temp);
        temp=NULL;
        return first;
    }
    else
    {
        temp=first;
        prev=NULL;
        while(temp != NULL)
        {
            if(temp->data == key)
            {
                prev->link=temp->link;
                free(temp);
                temp=NULL;
                return first;
            }
            else
            {
                prev=temp;
                temp=temp->link;
            }
        }
        printf("key not found");
        return first;
    }
}

void main()
{
    int key;
    printf("enter the linked list\n");
    first=create(first);
    printf("the linked list is:\n");
    display(first);
    printf("enter the key to delete\n");
    scanf("%d",&key);
    first=delete(first,key);
    printf("linked list after deletion\n");
    display(first);
}
