//SLL
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *first=NULL;
void insert_front()
{
    int elem;
    struct node *p;
    p=malloc(sizeof(struct node));
    printf("enter the element to insert:\n");
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
}

void insert_rear()
{
    int elem;
    struct node *p,*temp;
    p=malloc(sizeof(struct node));
    printf("enter the element to insert:\n");
    scanf("%d",&elem);
    p->data=elem;
    p->link=NULL;
    if(first == NULL)
    {
        first=p;
    }
    else
    {
        temp=first;
        while(temp->link != NULL)
        {
            temp=temp->link;
        }
        temp->link=p;
    }
}

void delete_front()
{
    struct node *temp;
    if(first == NULL)
    {
        printf("deletion not possible\n");
    }
    else if(first->link == NULL)
    {
        printf("deleted node is:%d",first->data);
        free(first);
        first=NULL;
    }
    else
    {
        printf("deleted node is:%d",first->data);
        temp=first;
        first=first->link;
        free(temp);
        temp=NULL;

    }
}

void delete_rear()
{
    struct node *temp;
    if(first == NULL)
    {
        printf("deletion not possible\n");
    }
    else if(first->link == NULL)
    {
        printf("deleted node is:%d",first->data);
        free(first);
        first=NULL;
    }
    else
    {
        temp=first;
        while(temp->link->link != NULL)
        {
            temp=temp->link;
        }
        printf("deleted node is:%d",temp->link->data);
        free(temp->link);
        temp->link=NULL;
    }
}

void display()
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

void main()
{
    int choice;
    while(1)
    {
        printf("press 1 to insert front:\n");
        printf("press 2 to insert rear:\n");
        printf("press 3 to delete front:\n");
        printf("press 4 to delete rear:\n");
        printf("press 5 to display:\n");
        printf("press 6 to STOP:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert_front();
                    break;
            case 2: insert_rear();
                    break;
            case 3: delete_front();
                    break;
            case 4: delete_rear();
                    break;
            case 5: display();
                    break;
            default: exit(0);
                    break;
        }
    }
}
