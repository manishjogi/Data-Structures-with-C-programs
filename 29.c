//copy one string to another
#include<stdio.h>
char str[10],str1[10];
void cpystr();
void main()
{
    printf("enter 1st string:\n");
    scanf("%s",str);
    cpystr();
}
void cpystr()
{
    int i=0;
    while(str[i] != '\0')
    {
        str1[i]=str[i];
        i++;
    }
    str1[i]='\0';
    printf("copied string is:%s",str1);
}
