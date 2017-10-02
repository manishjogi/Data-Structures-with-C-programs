//stack using LL
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *first=NULL;

void push()
{
    int elem;
    struct node *p;
    p=malloc(sizeof(struct node));
    printf("enter the element to push\n");
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

void pop()
{
    struct node *temp;
    if(first == NULL)
    {
        printf("Pop not possible");

    }
    else if(first->link == NULL)
    {
        printf("poped element is%d",first->data);
        free(first);
        first=NULL;
    }
    else
    {
        printf("poped element is:%d",first->data);
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

void main()
{
    int choice;
    while(1)
    {
        printf("press 1 to push\n");
        printf("press 2 pop\n");
        printf("press 3 to display\n");
        printf("press 4 to exit");
        printf("enter your ch0ice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
                    break;
            case 2: pop();
                    break;
            case 3:display();
                    break;
            default:exit(0);
                    break;
        }
    }
}
