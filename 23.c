//print charecter using pointer
#include<stdio.h>
void main()
{
    char ch;
    char *p;
    printf("enter a charecter:\n");
    scanf("%c",&ch);
    printf("normal:%c\taddress:%d\n",ch,ch);
    p=&ch;
    printf("pointer:%c\taddress:%d",*p,*p);
}
