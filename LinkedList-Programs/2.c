//queue using LL
#include<stdio.h>
#include<stdlib.h>
void insert();
void delete();
void display();
struct node
{
    int data;
    struct node *link;
};
struct node *first=NULL;

void main()
{
    int choice;
    while(1)
    {
        printf("press 1 to insert\n");
        printf("press 2 delete\n");
        printf("press 3 to display\n");
        printf("press 4 to exit");
        printf("enter your ch0ice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert();
                    break;
            case 2: delete();
                    break;
            case 3:display();
                    break;
            default:exit(0);
                    break;
        }
}
}
void insert()
{
    int elem;
    struct node *p,*temp;
    p=malloc(sizeof(struct node));
    printf("enter the element to insert\n");
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
void delete()
{
    struct node *temp;
    if(first == NULL)
    {
        printf("delete not possible\n");
    }
    else if(first->link == NULL)
    {
        printf("deleted node is:%d",first->data);
        free(first);
        first=NULL;
    }
    else
    {
        printf("deleted element is:%d",first->data);
        temp=first;
        first=first->link;
        free(temp);
        temp=NULL;

    }
}
void display()
{
    struct node *temp;
    if(first == NULL)
    {
        printf("display not possible");
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
