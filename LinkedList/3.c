//structure method3
#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct student
    {
        char name[10];
        int age;
        float height;
    };
    struct student s[3];
    int i;
    for(i=0;i<=2;++i)
    {
        printf("enter the name,age,height of students:");
        scanf("%s%d%f",s[i].name,&s[i].age,&s[i].height);
    }
    for(i=0;i<=2;++i)
    {
        printf("\n%s\t%d\t%f\n",s[i].name,s[i].age,s[i].height);

    }
}
