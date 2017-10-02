//using pointerv4
#include<stdio.h>
void main()
{
    char str[10];
    int i=0;
    char *p;
    printf("enter the string:\n");
    scanf("%s",str);
    p=&str[0];
    while(p[i] != '\0' )
    {
        printf("%c",p[i]);
        ++i;
    }
}
