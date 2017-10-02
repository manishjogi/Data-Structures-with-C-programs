//Replace key with new key
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
        printf("enter the element\n");
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
        printf("DO you wanna continue?(1)");
        scanf("%d",&choice);
    }while(choice == 1);
    return first;
}

void display(struct node *first)
{
    struct node *temp;
    if(first == NULL)
    {
        printf("display not possible\n");

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

void search(struct node *first,int oldkey,int newkey)
{
    int count=0;
    struct node *temp;
    if(first == NULL)
    {
        printf("search not possible");
    }
    else
    {
        temp=first;
        while(temp != NULL)
        {
            if(temp->data == oldkey)
            {
                temp->data=newkey;
                ++count;
                temp=temp->link;
            }
            else
            {
                temp=temp->link;
            }
        }
        if(count == 0)
        {
            printf("key not found\n");
        }
        else
        {
            printf("the no of old key replaced is:%d",count);
        }
    }
}
void main()
{
    int oldkey,newkey;
    printf("enter the linked list:\n");
    first=create(first);
    printf("linked list is:\n");
    display(first);
    printf("enter the key to search\n");
    scanf("%d",&oldkey);
    printf("enter the new key to replace\n");
    scanf("%d",&newkey);
    search(first,oldkey,newkey);
    printf("The modified linked list is:\n");
    display(first);
}
