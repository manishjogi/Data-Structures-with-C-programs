//using pointer v5
#include<stdio.h>
char str1[10],str2[10];
void main()
{
    int i=0;
    char *p1,*p2;
    printf("enter string:\n");
    scanf("%s",str1);
    p1=str1;
    p2=str2;
    while(p1[i] != '\0')
    {
        p2[i]=p1[i];
        i++;
    }
    p2[i]='\0';
    printf("copied string is:%s",p2);
}
