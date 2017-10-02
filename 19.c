//count the no of vowels and consonents
#include<stdio.h>
char str[10];
void ct();
void main()
{
    printf("enter the string:\n ");
    scanf("%s",str);
    ct();
}
void ct()
{
    int i=0,vcnt=0,ccnt=0,scnt=0;
    while(str[i] != '\0' )
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' ||
               str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
               ++vcnt;
            }
            else
            {
               ++ccnt;
            }
        }
        else
        {
          ++scnt;
        }
        ++i;
    }
    printf("vowels count:%d\tconsonents count:%d\tspl symbols count:%d",vcnt,ccnt,scnt);
}
