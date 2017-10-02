//without using library string length
#include<stdio.h>

void main()
{
    int i=0,count=0;
    char str[10];
    printf("enter the string:\n");
    scanf("%s",str);
    for(i;str[i] != '\0';i++)
    {
        count++;
    }
    printf("String length is:%d",count);
}
