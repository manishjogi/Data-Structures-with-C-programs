#include<stdio.h>
char str[10];
int slen();
void main()
{
    int l;
    printf("enter the string:\n");
    scanf("%s",str);
    l=slen();
    printf("Length of string is:%d",l);

}
int slen()
{
    int i=0,count=0;
    while(str[i] != '\0')
    {
        i++;
        count++;
    }
    return count;
}
