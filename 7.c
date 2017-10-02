//string reverse impotant here char* or const char*
#include<stdio.h>
char str1[10],str2[10];
char* strev();
void main()
{
    char* r;
    printf("enter the string:\n");
    scanf("%s",str1);
    r=strev();
    printf("reversed string is:%s",r);

}
char* strev()
{
    int i=0,count=0;
    while(str1[i] != '\0')
    {
        i++;
        count++;
    }
    for(i=0;str1[i] != '\0';i++)
    {
        str2[count-1-i]=str1[i];
    }
    str2[i]='\0';
    return str2;
}
