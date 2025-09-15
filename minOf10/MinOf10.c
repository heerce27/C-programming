//min of n values
#include<stdio.h>
void main()
{
    int a[100],i,min,n;
    printf("Enter number of values:");
    scanf("%d",&n);
    printf("Enter values:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    min=99999;
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf(" \nMinimum value
            is %d. ",min);
}
