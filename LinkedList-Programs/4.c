//count no of nodes in LL
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
    int elem,i,choice;
    struct node *p;
    do
    {
        p=malloc(sizeof(struct node));
        printf("enter the element:\n");
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
        printf("Do you wanna continue(1)...??\n");
        scanf("%d",&choice);
    } while(choice == 1);
    return first;
}

void lincount(struct node *first)
{
    int count=0;
    struct node *temp;
    temp=first;
    while(temp != NULL)
    {
      count++;
      temp=temp->link;
    }
    printf("The no of nodes in LL %d",count);
}
void display(struct node *first)
{
   struct node *temp;
   if(first == NULL)
   {
       printf("display not possible..\n");

   }
   else if(first->link == NULL)
   {
       printf("%d",first->data);
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
    int count;
    printf("enter the LL:\n");
    first=create(first);
    display(first);
    lincount(first);


}
