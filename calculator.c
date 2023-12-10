#include<stdio.h>
int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int mul(int a, int b)
{
    return a*b;
}
int mod(int a,int b)
{
    return a%b;
}
int div(int a, int b)
{
    if(b!=0)
    {
        return a/b;
    }
    else
    {
        printf("Error:cannot divide by zero/n");
        return 0;
    }
}
int main()
{
    char operator;
    int num1,num2,result;
    printf("Enter the operator(+,-,*,/,%)");
    scanf("%c",&operator);
    printf("\n Enter the number 1:");
    scanf("%d",&num1);
    printf("\n Enter the number 2:");
    scanf("%d",&num2);
    switch (operator)
    {
        case'+':
        result=add(num1,num2);
        break;
        case'-':
        result=sub(num1,num2);
        break;
        case'*':
        result=mul(num1,num2);
        case'/':
        result=div(num1,num2);
        break;
        case'%':
        result=mod(num1,num2);
        break;
        default:
        printf("Error:Invalid input operator\n");
        return 1;
    }
    printf(" Answer is :%d\n",result);
    return 0;
}