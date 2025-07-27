//Sum of natural number
#include<stdio.h>
void main()
{
    int sum,n;
    printf("Enter  number: ");
    scanf("%d",&n);
    sum=0;
    for(int i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("Sum of %d natural number: %d",n,sum);

}
