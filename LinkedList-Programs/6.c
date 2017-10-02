//Reverse SLL
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
        printf("enter the element..\n");
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
        printf("Do you wanna continue(0/1)...?");
        scanf("%d",&choice);
    }while(choice == 1);
    return first;
}

void display(struct node *first)
{
    struct node *x;
    if(first == NULL)
    {
        printf("Display not possible\n");
    }
    else if(first->link == NULL)
    {
        printf("%d\t",first->data);
    }
    else
    {
        x=first;
        while(x != NULL)
        {
            printf("%d\t",x->data);
            x=x->link;
        }
    }
}

struct node *reverse(struct node *first)
{
    struct node *temp,*temp1,*temp2;
    temp=first;
    temp1=first->link;
    temp2=first->link->link;
    while(temp2 != NULL)
    {
        temp1->link=temp;
        temp=temp1;
        temp1=temp2;
        temp2=temp2->link;
    }
    temp1->link=temp;
    first->link=NULL;
    first=temp1;
    return first;
}

void main()
{

    printf("enter the LL...\n");
    first=create(first);
    printf("Original LL is:\n");
    display(first);
    first=reverse(first);
    printf("Reversed LL is:..");
    display(first);
}
