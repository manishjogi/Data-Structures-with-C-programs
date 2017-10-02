#include<stdio.h>
char str[10];
void convert();
void main()
{

printf("enter the lowercase string:\n");
scanf("%s",str);
convert();
}
void convert()
{
    int i=0;
    while(str[i] != '\0')
    {
        str[i]=str[i]-32;
        i++;
    }
    printf("UPPERCASE string is:%s",str);
}
