//string length using library
#include<stdio.h>
#include<string.h>

void main()
{
    char str[10];
    printf("enter the string\n");
    scanf("%[^\n]s",str);
    printf("string lenth is %d",strlen(str));
}
