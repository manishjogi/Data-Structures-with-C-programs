//read array charecter normal
#include<stdio.h>
#include<stdlib.h>
void main()
{
    char *str;
    int i=0;
    str=(char *)malloc(sizeof(char));
    printf("enter a string:\n");
    scanf("%s",str);
    while(str[i] != '\0')
    {
        printf("%c",str[i]);
        printf("\t");
        i++;
    }
}
