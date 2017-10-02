//Add nodes of LL
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
        printf("Do you wanna continue(1)...?\n");
        scanf("%d",&choice);
    }while(choice == 1);
    return first;
}

void display(struct node *first)
{
    struct node *temp;
    if(first == NULL)
    {
        printf("Display not possible\n");
    }
    else if(first->link == NULL)
    {
        printf("%d\n",first->data);
    }
    else
    {
        temp=first;
        while(temp != NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->link;
        }
    }
}

int linsum(struct node *first)
{
    int sum=0;
    struct node *temp;
    temp=first;
    while(temp != NULL)
    {
        sum=sum+temp->data;
        temp=temp->link;
    }
    return sum;
}

void main()
{
    int sum;
    printf("Enter the LL:\n");
    first=create(first);
    display(first);
    sum=linsum(first);
    printf("Sum of nodes in LL:%d",sum);
}
