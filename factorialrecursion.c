#include<stdio.h>
int fact(int);
void main()
{
    int a,fact1;
    printf("\n Enter the number to calculate the factorial:");
    scanf("%d",&a);
    fact(a);
    fact1=fact(a);
    printf("Factorial of the %d is:%d",a,fact1);
}
int fact(int x)
{
    if(x<1)
    return 1;
    else
    return x*fact(x-1);
}