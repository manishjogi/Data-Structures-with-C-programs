//string reverse
#include<stdio.h>
char str1[10],str2[10];
void strev();
void main()
{
    const char * r;
    printf("enter the string:\n");
    scanf("%s",str1);
    strev(str1);

}
void strev()
{
    int i=0,count=0;
    while(str1[i] != '\0')
    {
        ++i;
        ++count;
    }
    for(i=0;str1[i] != '\0';++i)
    {
        str2[count-1-i]=str1[i];
    }
    str2[i]='\0';
    printf("reversed string is:%s",str2);

}
