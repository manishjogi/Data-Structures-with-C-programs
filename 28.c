//using pointer v5
#include<stdio.h>
void main()
{
    char str[10];
    char *p;
    printf("enter string:");
    scanf("%s",str);
    p=str;
    int i=0;
    while(p[i] != '\0')
    {
        printf("%c",p[i]);
        ++i;
    }

}
