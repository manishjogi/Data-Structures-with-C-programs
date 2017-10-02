//using pointer v4
#include<stdio.h>
char str1[10],str2[10];
void cpystr(char *,char *);
void main()
{
    printf("enter string:\n");
    scanf("%s",str1);
    cpystr(str1,str2);
}
void cpystr(char *p1,char *p2)
{
   int i=0;
   while(*(p1+i) != '\0')
   {
       *(p2+i)=*(p1+i);
       i++;
   }
   *(p2+i)='\0';
   printf("copied string is:%s",p2);
}
