#include<stdio.h>
void main()
{
    int n,mult;
    printf("enter n=");
    scanf("%d",&n);
    mult=1;
    for(int i=1;i<=n;i++)
    {
        mult *=i;
    }
    printf("fact of %d if %d ",n,mult);
}
