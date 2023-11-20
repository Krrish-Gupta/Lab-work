#include<stdio.h>
int main()
{
    int number,i;
    unsigned long long factorial = 1;
printf("Enter a positive number");
scanf("%d",&number);
if(number<0)
{
    printf("errror:factorial is not defined for negative numbers");
}
else
{
  for(i=1;i<=number;++i)
  {
    factorial*=i;
  }
  printf("factorial of %d=%llu\n",number,factorial);
}
}