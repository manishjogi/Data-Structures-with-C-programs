//QUEUE data structure
#include<stdio.h>
#include<stdlib.h>
int q[5];
int rear=-1;
int front=0;
int size=5;

void insert()
{
    int elem;
    if(rear == size-1)
    {
        printf("QUEUE full");
    }
    else
    {
        printf("enter the element to insert:");
        scanf("%d",&elem);
        ++rear;
        q[rear]=elem;
    }
}

void delete()
{
    if(rear == -1 || front > rear)
    {
        printf("QUEUE is empty");
    }
    else
    {
        printf("element deleted is:%d",q[front]);
        ++front;
    }
}

void display()
{
    int i;
    if(rear == -1 || front > rear)
    {
        printf("DISPLAY not possible");
    }
    else
    {
        printf("QUEUE elements are:\t");
        for(i=front;i <= rear;++i)
        {
            printf("%d\t",q[i]);
        }

    }
}

void main()
{
    int choice;
    while(1)
    {
        printf("press 1 for INSERT\n");
        printf("press 2 for DELETE\n");
        printf("press 3 for DISPLAY\n");
        printf("press 4 for STOP\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert();
                    break;
            case 2: delete();
                    break;
            case 3: display();
                    break;
            default: exit(0);
                    break;
        }

    }

}

