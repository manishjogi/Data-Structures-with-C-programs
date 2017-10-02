//print ASCII value
#include<stdio.h>
char str[10];
void main()
{
    int i=0;
    printf("enter the string\n");
    scanf("%s",str);
     printf("ASCII CODE IS:\n");
    while(str[i] != '\0')
    {
        printf("%d\t",str[i]);
        i++;
    }

}
