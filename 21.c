//using stucture
//swap two no's direct method
#include<stdio.h>
struct t
{
    int a,b;
};
struct t swap(int,int);
void main()
{
    int a,b,c;
    struct t n;
    printf("enter the values a and b:\n");
    scanf("%d\t%d",&a,&b);
    n=swap(a,b);
    printf("swap values:%d\t%d",n.a,n.b);

}
struct t swap(int a,int b)
{
    struct t res;
    int temp;
    temp=a;
    res.a=b;
    res.b=temp;
    return res;
}
