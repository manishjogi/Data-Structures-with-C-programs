//copy one string to another string
#include<stdio.h>
char str1[10],str2[10];
void strcy(char []);
void main()
{
    printf("enter the string:\n");
    scanf("%s",str1);
    strcy(str1);
}

void strcy(char str1[])
{
    int i=0;
  while(str1[i] != '\0')
  {
      str2[i]=str1[i];
      i++;
  }
  str2[i]='\0';
  printf("Copied string is:%s",str2);
}
