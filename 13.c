//concatination of two string
#include<stdio.h>
#include<stdlib.h>
char *str1,*str2,*str3;
char* join();
void main()
{
    char* full;
    str1=(char*)malloc(sizeof(char));
    printf("enter first string:\n");
    scanf("%s",str1);
    str2=(char*)malloc(sizeof(char));
    printf("enter the second string:\n");
    scanf("%s",str2);
    full=join();
    printf("joined string is:%s",full);

}

char* join()
{
    int i=0,j=0,k=0;
    str3=(char*)malloc(sizeof(char));
    while(str1[i] != '\0')
    {
        str3[i]=str1[i];
        ++i;
    }
    str3[i]=' ';
    ++i;
    while(str2[j] != '\0')
    {
        str3[i]=str2[j];
        ++j;
        ++i;
    }
    str3[i]='\0';
    return str3;

}
