#include<stdio.h>
#include<stdlib.h>
int mystrcmp(char [],char []);
void main()
{
  char str1[10],str2[10];
  int ans;

  printf("enter the first string:\n");
  scanf("%s",str1);
  printf("enter the second string:\n");
  scanf("%s",str2);
  ans=mystrcmp(str1,str2);
  if(ans == -1)
  {
      printf("strings are unequal");
  }
  else{
    printf("strings are equal");
  }
}

 int mystrcmp(char str1[],char str2[])
 {
    int i=0,count1=0,count2=0;

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
       return -1;

    }
    else
    {
      i=0;
      while(str1[i] != '\0' && str2[i] != '\0')
      {
          if(str1[i] != str2[i])
          {
              return -1;
          }
          else
          {
              ++i;
          }
      }
      return 1;
    }
}
