#include<stdio.h>
void main()
{
    int n1,n2,n3,i,n;
    n1=0;
    n2=1;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("%d %d ",n1,n2);
    for(int i=2;i<n;i++)
    {
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
}
