//structure method2
#include<stdio.h>
struct student
{
    char name[10];
    int age;
    float height;
}
s[2]={{"mani",18,7.1},{"jogi",22,6.5}};
void main()
{
    printf("first student name:%s\n",s[0].name);
    printf("first student age:%d\n",s[0].age);
    printf("first student height:%f\n",s[0].height);
    printf("second student name:%s\n",s[1].name);
    printf("second student age:%d\n",s[1].age);
    printf("second student height:%f\n",s[1].height);
}
