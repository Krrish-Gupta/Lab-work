#include<stdio.h>
void main()
{
    int a=10,b=20;
    void swap(int,int);
    void swap1(int*,int*);
    printf("Before swapping");
    printf("A=%d\t B=%d\n",a,b);
    swap(a,b);
    printf("After swapping");
    printf("A=%d\t B=%d\n",a,b);
    swap1(&a,&b);
    printf("After swapping");
    printf("A=%d\t B=%d\n",a,b);
}
void swap(int x,int y)
{
  int t=x;
  x=y;
  y=t;
}
void swap1(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
}