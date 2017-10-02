//circular queue using pointer
#include<stdio.h>
#include<stdlib.h>

void insert(int cq[],int *front,int *rear,int *count,int size)
{
    int elem;
    if(*count == size)
    {
        printf("C QUEUE is full\n");
    }
    else
    {
        printf("enter the element to INSERT:");
        scanf("%d",&elem);
        *rear=(*rear+1)%size;
        cq[*rear]=elem;
        ++(*count);
    }
}

void delete(int cq[],int *front,int *rear,int *count,int size)
{
    if(*count == 0)
    {
        printf("DILITION not possible");
    }
    else
    {
        printf("DELETED element is:%d",cq[*front]);
        *front=(*front+1)%size;
        --(*count);
    }
}

void display(int cq[],int *front,int *rear,int *count,int size)
{
    int i,f1;
    f1=*front;
    if(*count == 0)
    {
        printf("DISPLAY not possible");
    }
    else
    {
       for(i=0;i<*count;i++)
       {
           printf("%d\t",cq[f1]);
           f1=(f1+1)%size;

       }
    }
}

void main()
{
    int cq[5];
    int front=0;
    int count=0;
    int rear=-1;
    int size=5;


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
            case 1: insert(cq,&front,&rear,&count,size);
                    break;
            case 2: delete(cq,&front,&rear,&count,size);
                    break;
            case 3: display(cq,&front,&rear,&count,size);
                    break;
            default: exit(0);
                    break;
        }

    }

}

