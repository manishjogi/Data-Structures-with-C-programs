//using pointer v3
#include<stdio.h>
char str[10],str1[10];
void cpystr(char *);
void main()
{
    printf("enter string:\n");
    scanf("%s",str);
    cpystr(&str[0]);
}
void cpystr(char *p)
{
    int i=0;
    while(*(p+i) != '\0')
    {
        *(str1+i)=*(p+i);
        i++;
    }
    *(str1+i)='\0';
    printf("copied string is:%s",str1);
}
