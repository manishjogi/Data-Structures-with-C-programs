//using pointer swap two no's
#include<stdio.h>
void swap(int *,int *);
void main()
{
    int a,b;
    printf("enter two no's for swap:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("swaped values:%d\t%d",a,b);
}
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
