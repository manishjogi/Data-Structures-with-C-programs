//string length using while(works with one white sp ace
#include<stdio.h>
void main()
{
    int i=0,count=0;
    char str[20];
    printf("enter the string:\n");
    scanf("%[^\n]s",str);
    //gets(str);
    while(str[i] != '\0')
    {
        i=++i;
        count=++count;

    }
    if(str[i+1] == ' ')
    {
        i=i+1;
        for(i;str[i] != '\0';i++)
        {
            count++;
        }
        printf("Length of the string is:%d",count);
    }
     else
        {
    printf("The length of the string is:%d",count);
       }
}
