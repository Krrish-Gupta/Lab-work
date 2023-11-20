#include<stdio.h>
int main()
{
    int num,i=2,c=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    while(i<=num/2)
    {
        if(num%i==0)
        {
            c++;
            break;
        }
        i++;
    }
        if(c==0&&num!=1)
        printf("%d is a prime number",num);
        else
        printf("%d is not a prime number",num);
        return 0;
    
    
}