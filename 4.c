//string length using do while loop
#include<stdio.h>
void slen(int,int,char []);
void main()
{
    int i=0,count=0;
    char str[10];
    printf("enter the string:\n");
    scanf("%s",str);
    slen(i,count,str);
}
void slen(int i,int count,char str[])
{
   do
   {
       count++;
       i++;
   }
   while(str[i] != '\0');
   printf("String length is:%d",count);
}
