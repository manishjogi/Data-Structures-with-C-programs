//swap two no's direct method
#include<stdio.h>
void swap(int,int);
void main()
{
    int a,b,c;
    printf("enter the values a and b:\n");
    scanf("%d\t%d",&a,&b);
    swap(a,b);
    printf("swap values:%d\t%d",a,b);

}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
