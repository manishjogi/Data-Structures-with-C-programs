//DLL
#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *llink;
    int data;
    struct node *rlink;
};
struct node *first=NULL;

void insert_front()
{
    int elem;
    struct node *p;
    p=malloc(sizeof(struct node));
    printf("enter the element to insert:\n");
    scanf("%d",&elem);
    p->llink=NULL;
    p->data=elem;
    p->rlink=NULL;
    if(first == NULL)
    {
        first=p;
    }
    else
    {
        p->rlink=first;
        first->llink=p;
        first=p;
    }
}

void insert_rear()
{
    int elem;
    struct node *p,*temp;
    p=malloc(sizeof(struct node));
    printf("enter element to insert:\n");
    scanf("%d",&elem);
    p->llink=NULL;
    p->data=elem;
    p->rlink=NULL;
    if(first == NULL)
    {
        first=p;
    }
    else
    {
       temp=first;
       while(temp->rlink != NULL)
       {
           temp=temp->rlink;
       }
       temp->rlink=p;
       p->llink=temp;
    }
}

void delete_front()
{
    struct node *p,*temp;
    if(first == NULL)
    {
        printf("deletion not possible");
    }
    else if(first->rlink == NULL)
    {
        printf("deleted node is:%",first->data);
        free(first);
        first=NULL;
    }
    else
    {
        printf("element deleted is:%d\n",first->data);
        temp=first;
        first=first->rlink;
        free(temp);
        first->llink=NULL;
        temp=NULL;
    }
}
void delete_rear()
{
    struct node *temp;
    if(first == NULL)
    {
        printf("deletion not possible");
    }
    else if(first->rlink == NULL)
    {
        printf("deleted node is:%d",first->data);
        free(first);
        first=NULL;
    }
    else
    {
        temp=first;
        while(temp->rlink->rlink != NULL)
        {
            temp=temp->rlink;
        }
        printf("deleted node is:%d",temp->rlink->data);
        free(temp->rlink);
        temp->rlink=NULL;
    }
}

void display()
{
    struct node *temp;
    if(first == NULL)
    {
        printf("display not possible");
    }
    else if(first->rlink == NULL)
    {
        printf("%d\t",first->data);
    }
    else
    {
        temp=first;
        while(temp != NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->rlink;
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
