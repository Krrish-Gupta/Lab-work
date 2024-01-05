#include<stdio.h>
void main()
{
struct student
{ 
int m1,m2,m3;
int tot;
float avg;
};
struct student s1;
int i;
printf("enter the student marks");
scanf("%d%d%d",&s1.m1,&s1.m2,&s1.m3);
s1.tot=s1.m1+s1.m2+s1.m3;
s1.avg=(float)s1.tot/3.0;
printf("student marklist\n");
printf("student1:%d\n",s1.m1);
printf("student2:%d\n",s1.m2);
printf("student3:%d\n",s1.m3);
printf("total:%d\n",s1.tot);
printf("Average:%.2f\n",s1.avg);
}