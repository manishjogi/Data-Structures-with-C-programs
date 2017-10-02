//covert uppercase string to lowercase
#include<stdio.h>
#include<stdlib.h>
int i=0;
void convert(char*);
void main()
{
   char* str;
   str=(char*)malloc(sizeof(char));
   printf("enter the UPPERCASE string\n");
   scanf("%s",str);
   convert(str);

}
void convert(char* str)
{

    while(str[i] != '\0')
    {
        str[i]=str[i]+32;
        i++;
    }
    printf("lowercase STRING IS:%s",str);
}

