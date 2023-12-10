#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    printf("Enter the points:");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    int distance;
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("Distance between two points =%d",distance);
    return 0;
}