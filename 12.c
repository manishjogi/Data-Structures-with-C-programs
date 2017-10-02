//string palindrome or not
#include<stdio.h>
#include<stdlib.h>
char *str1,*str2;
int i;
char* pal();
void main()
{
    char *rev;
    str1=(char*)malloc(sizeof(char));
    printf("enter the string:");
    scanf("%s",str1);
    rev=pal();
    i=0;
    while(str1[i] != '\0' && rev[i] != '\0')
    {
        if(str1[i] != rev[i] )
        {
            printf("not palindrome");
            exit(0);
        }
        else
        {
           ++i;
        }

    }
    printf("palindrome");

}

char* pal()
{
    int count=0;
    i=0;
    while(str1[i] != '\0')
    {
        ++i;
        ++count;
    }
    i=0;
    str2=(char*)malloc(sizeof(char));
    while(str1[i] != '\0')
    {
        str2[count-1-i]=str1[i];
        ++i;
    }
    str2[i]='\0';
    return str2;
}
