#include<stdio.h>
#include<math.h>
int main()
{
    int number,originalNumber,remainder,n=0,result=0;
    printf("Enter the number");
    scanf("%d",&number);
    originalNumber=number;
    while(originalNumber!=0)
       {
         originalNumber/=10;
         ++n;
       }
    originalNumber=number;
    while(originalNumber!=0)
    {
        remainder=originalNumber%10;
        result+=pow(remainder,n);
        originalNumber/=10;
    }
    if(result==number)
    {
        printf("%d is an armstrong number.\n",number);
    }
    else
    {
        printf("%d is not an armstrong number.\n",number);
    }
    return 0;
}
