#include<stdio.h>
void main()
{
    int arr[10]={2,4,1,6,5,8,7,3,10,9};
    int ele,found=0,i;
    printf(" Enter the element to search");
    scanf("%d",&ele);
    for(i=0;i<10;i++)
    {
        if(arr[i]==ele)
        {
printf("element %d found at index\n",ele);
found=1;
break;
        }
    }
    if(!found)
    {
        printf("Element  %d not found in the index",ele);
    }
}