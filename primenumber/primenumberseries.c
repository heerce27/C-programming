#include<stdio.h>
void main()
{
    int n,i,j,ip;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<=0)
    printf("Invalid.");
    for(i=2;i<=n;i++)
    {
        ip=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {  ip==0;
                break;
        }
    } if(ip==1)
    printf("%d ",i);
}
}
