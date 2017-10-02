//using pointer
#include<stdio.h>
void main()
{
    char str[10];
    int i=0;
    //char (*p)[10];
    printf("enter the string:\n");
    scanf("%s",str);
    //p=&str;
    while(*(str+i) != '\0' )
    {
        printf("%c",*(str+i));
        ++i;
    }
}
