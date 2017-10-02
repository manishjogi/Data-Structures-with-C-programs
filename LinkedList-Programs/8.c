//search with multiple key in linkedlist
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
  printf("Do you wanna continue?(1)..\n");
  scanf("%d",&choice);
  }while(choice == 1);
  return first;
}

void display(struct node *first)
{
    struct node *temp;
    if(first == NULL)
    {
        printf("Display not possible");
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

void search(struct node *first,int key)
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
            if(temp->data == key)
            {
                printf("key is found\n");
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
            printf("no of key nodes are %d",count);
        }
    }
}

void main()
{
    int key;
    printf("enter the linked list\n");
    first=create(first);
    printf("the linked list is:\n");
    display(first);
    printf("enter the key to be searched :\n");
    scanf("%d",&key);
    search(first,key);

}
