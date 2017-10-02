#include<stdio.h>
void main()
{
    char ch;
    printf("ENTER A lowercase CHARECTER\n");
    scanf("%c",&ch);
    printf("uppercase charecter is:%c",ch-=32);

}
