//comparisn of two stringstream

#include<stdio.h>
#include<stdlib.h>
char *str1,*str2;
void cmpst();
void main()
{
  str1=(char*)malloc( sizeof(char));
  printf("enter the first string:\n");
  scanf("%s",str1);

  str2=(char*)malloc( sizeof(char));
  printf("enter the second string:\n");
  scanf("%s",str2);
  cmpst();
}

void cmpst()
{
    int i=0,count1=0,count2=0;
    while(str1[i] != '\0')
    {
        i++;
        count1++;
    }
    i=0;
    while(str2[i] != '\0')
    {
       i++;
       count2++;
    }
    if(count1 != count2)
    {
        printf("strings are not equal");
        exit(0);

    }
    else
    {
      i=0;
      while(str1[i] != '\0' && str2[i] != '\0')
      {
          if(str1[i] != str2[i])
          {
              printf("strings are not equal:");
              exit(0);
          }
          else
          {
              ++i;
          }
      }
      printf("strings are equal");
    }
}
