//stack datastructure
#include<stdio.h>
#include<stdlib.h>
int s[5];
int top=-1;
int size=5;
void push()
{
    int elem;
    if(top == size-1)
    {
        printf("stack is already full");
    }
    else
    {
        printf("enter the element to push:\n");
        scanf("%d",&elem);
        ++top;
        s[top]=elem;

    }
}

void pop()
{
    if(top == -1)
    {
        printf("stack is empty pop not possible");
    }
    else
    {
        printf("element deleted is:%d",s[top]);
        --top;
    }
}

void display()
{
    int i;
    if(top == -1)
    {
        printf("stack empty display not possible");
    }
    else
    {
        printf("stack elements are:");
        for(i=top;i>=0;--i)
        {
            printf("\n%d\n",s[i]);
        }
    }
}

void main()
{
    int choice;
    while(1)
    {
        printf("Press 1 to PUSH\n");
        printf("press 2 to POP\n");
        printf("press 3 to DISPLAY\n");
        printf("press 4 to STOP\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
                    break;
            case 2:pop();
                    break;
            case 3:display();
                    break;
            default:exit(0);
                    break;
        }
    }
}
