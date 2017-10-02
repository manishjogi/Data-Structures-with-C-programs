#include<stdio.h>
#include<stdlib.h>

void main()
{
  char str1[10],str2[10];
  int i=0,count1=0,count2=0;
  printf("enter the first string:\n");
  scanf("%s",str1);
  printf("enter the second string\n");
  scanf("%s",str2);

    while(str1[i] != '\0')
    {
        ++count1;
        ++i;

    }
    i=0;
    while(str2[i] != '\0')
    {
        ++count2;
       ++i;
    }
    if(count1 != count2)
    {
        printf("strings are not equal");
        exit(0);  //not must

    }
    else
    {
      i=0;
      while(str1[i] != '\0' && str2[i] != '\0')
      {
          if(str1[i] != str2[i])
          {
              printf("strings are not equal:");
              exit(0); //it is must
          }
          else
          {
              ++i;
          }
      }
      printf("strings are equal");
    }
}
