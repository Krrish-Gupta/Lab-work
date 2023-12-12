#include<stdio.h>
int main() 
{ 
struct student
 {
    int m1,m2,m3;
    int total;
    float avg;
    char r;
 };
    int n;
printf(" Enter the no. of students:") ;
scanf("%d",&n);
struct student s[n];
printf("Enter the student mark:");
for( int i=0;i<n;i++) 
{
scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
s[i].total=s[i].m1+s[i].m2+s[i].m3;
s[i].avg=(float)s[i].total/3.0;
if(s[i].avg>50)
s[i].r='P';
else 
s[i].r='F';
}
for(int i=0;i<n;i++)
{
printf("Student marklist \n");
printf("Subject 1:%d\n", s[i].m1);
printf("Subject 2:%d\n", s[i].m2);
printf("Subject 3:%d\n", s[i].m3);
printf("Total:%d\n", s[i].total);
printf("Average:%f\n", s[i].avg);
printf("Result:%c\n",s[i].r);
}
return 0;
}