//structure method4
#include<stdio.h>
void main()
{
    struct student
    {
        char name[10];
        int age;
        float height;
    };
    struct student s[3];
    struct student *p;
    int i;
    p=&s[0];
    for(i=0;i<=2;++i)
    {
        printf("enter the name,age,height of students:");
        scanf("%s%d%f",p->name,&p->age,&p->height);
        ++p;
    }
    p=&s[0];
    for(i=0;i<=2;++i)
    {
        printf("\n%s\t%d\t%f\n",p->name,p->age,p->height);
        ++p;

    }
}
