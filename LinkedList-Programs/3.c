//concat two LL
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *first1=NULL;
struct node *first2=NULL;

struct node *create(struct node *first)
{
    struct node *p;
    int i,elem;
    for(i=0;i<=5;i++)
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
    }
    return first;
}

struct node *concat(struct node *first1,struct node *first2)
{
    struct node *temp;
    temp=first1;
    while(temp->link != NULL)
    {
        temp=temp->link;
    }
    temp->link=first2;
    return first1;
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
    printf("enter the first LL\n");
    first1=create(first1);
    printf("enter the second LL\n");
    first2=create(first2);
    first1=concat(first1,first2);
    printf("concatinated LL is:..\n");
    display(first1);

}
