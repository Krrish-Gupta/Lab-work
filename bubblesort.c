#include<stdio.h>
void bubble_sort (int arr[],int n)
{
int i,j;
for(i=0;i<n-1;i++)
{
    for(j=0;j<n-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
}
int main()
{
    int arr[]={5,2,4,3,1},i;
    int n= sizeof (arr)/ sizeof arr[0];
    bubble_sort(arr,n);
    printf("sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}